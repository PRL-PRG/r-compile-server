# E-graph optimization

**Goal:** replace most FIR optimization passes with a single egraph pass, that tracks environment dependences and contains many rewrite rules

- Less code (for future optimizations)
- More efficient
- Existing optimizations applied more broadly

Cranelift's algorithm / https://cfallin.org/blog/2026/04/09/aegraph/ ("acyclic" e-graphs)

- Convert IR into sea-of-nodes with CFG "skeleton", then union-find, then convert out
  - As described in https://cfallin.org/blog/2026/04/09/aegraph/
- More fine-grained effects, specifically dependencies
  - An instruction is either pure with dependencies (including environments and reflective operations) or effectful (unique ID so it can't be merged in union-find)
  - Sea-of-nodes has control dependencies *and all* data dependencies: environments and variables are given their own nodes like registers
  - Existing optimizations become rewrite rules
