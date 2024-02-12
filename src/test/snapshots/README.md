# Snapshots

For regression testing, some also serve as cached computations (the `.rds` files created by invoking GNU-R).

**These don't get bundled because** we have to write to them, so we access them at their actual locations (bundled are overridden on recompile).
