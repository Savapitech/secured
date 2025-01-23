import sys
import matplotlib.pyplot as plt
from collections import defaultdict
import statistics

def parse_input(input_data):
    hash_table = defaultdict(list)
    current_index = None
    for line in input_data:
        line = line.strip()
        if line.startswith("[") and line.endswith("]:"):
            current_index = int(line[1:-2])
        elif current_index is not None and line.startswith(">"):
            parts = line.split(" - ")
            if len(parts) == 2:
                hash_value, value = parts
                hash_value = int(hash_value.strip("> "))
                hash_table[current_index].append((hash_value, value))
    return hash_table

def calculate_distribution(hash_table):
    bucket_sizes = [len(values) for values in hash_table.values()]
    total_buckets = len(bucket_sizes)
    total_elements = sum(bucket_sizes)
    mean_size = total_elements / total_buckets if total_buckets > 0 else 0
    std_deviation = statistics.stdev(bucket_sizes) if len(bucket_sizes) > 1 else 0
    stats = {
        "Total Buckets": total_buckets,
        "Total Elements": total_elements,
        "Mean Size per Bucket": round(mean_size, 2),
        "Distribution": round(std_deviation, 2),
    }
    return stats

def plot_hash_table_with_stats(hash_table, stats):
    indices = sorted(hash_table.keys())
    counts = [len(hash_table[index]) for index in indices]
    fig, ax = plt.subplots(figsize=(10, 6))
    bars = ax.bar(indices, counts, color='skyblue', edgecolor='black')
    ax.set_xlabel("Index", fontsize=12)
    ax.set_ylabel("Nb elem", fontsize=12)
    ax.set_title("Secured | Hashtable GUI", fontsize=14)
    ax.set_xticks(indices)
    ax.grid(axis='y', linestyle='--', alpha=0.7)
    stats_text = "\n".join([f"{key}: {value}" for key, value in stats.items()])
    plt.figtext(0.01, 0.01, stats_text, fontsize=10, ha='left', va='bottom', bbox=dict(facecolor='white', edgecolor='black'))
    plt.tight_layout()
    plt.show()

def main():
    input_data = sys.stdin.readlines()
    hash_table = parse_input(input_data)
    stats = calculate_distribution(hash_table)
    plot_hash_table_with_stats(hash_table, stats)

if __name__ == "__main__":
    main()

