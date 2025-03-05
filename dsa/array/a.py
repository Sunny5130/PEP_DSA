def dfs(node, min_weight, weights, children, max_diff):
    # Update the maximum difference
    max_diff[0] = max(max_diff[0], weights[node] - min_weight)

    # Update the minimum weight in the current path
    min_weight = min(min_weight, weights[node])

    # Traverse all children
    for child in children[node]:
        dfs(child, min_weight, weights, children, max_diff)

def main():
    import sys
    input = sys.stdin.read
    data = input().split()

    N = int(data[0])  # Number of nodes
    weights = [0] * (N + 1)  # Weights of nodes (1-based indexing)
    for i in range(1, N + 1):
        weights[i] = int(data[i])

    children = [[] for _ in range(N + 1)]  # Adjacency list for children
    root = -1

    for i in range(1, N + 1):
        parent = int(data[N + i])
        if parent == -1:
            root = i  # Identify the root
        else:
            children[parent].append(i)  # Add child to parent's list

    max_diff = [float('-inf')]  # Initialize maximum difference
    dfs(root, weights[root], weights, children, max_diff)  # Start DFS from the root

    print(max_diff[0])  # Output the result

if __name__ == "__main__":
    main()