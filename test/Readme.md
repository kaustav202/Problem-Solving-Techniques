## Program to flatten nested dictionary keys until a list or non-dict type is encountered

### Working

- The dict to be flattened and an argument last, denoting the concatenated keys upto the level of current dict (outer level) is passed to the function flatten_dict
- At each level the vlaue of last is stored in a variable temp so that original value of last is not modified for keys at the same level ( due to the for loop )
- For each key, if the encountered value is a dictionary we recursively call the function passing the last value from current level
- If the encountered value is not a dictionary, we add it to our final solution with the accumulated last value as the key after concatenating with '-'

### Test Cases

**sample1** 

{"a": {"b": ["1", 2]}, "c": ["2, 2"] , "b": {"x": ["a"], "b": {"x": {"z": ["1-2"]}}}}

**Output**

{'a-b': ['1', 2], 'c': ['2, 2'], 'b-x': ['a'], 'b-b-x-z': ['1-2']}

**sample2**

{"l": {"m": [10, 2], "n":[5,"b"] }, "k": {"p": {"q": ("a"), "r": {"s": {"t": ["6-5-4"]}}}}}

**Output**

{'l-m': [10, 2], 'l-n': [5, 'b'], 'k-p-r-s-t': ['6-5-4']}
