package org.prlprg.snapshots;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assumptions.abort;
import static org.prlprg.examples.ExampleOption.DONT_SAVE_SNAPSHOTS;

import java.nio.file.Path;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Set;
import org.opentest4j.TestAbortedException;
import org.prlprg.TestConfig;
import org.prlprg.examples.Example;
import org.prlprg.session.RSession;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;
import org.prlprg.util.Strings;

/// Lazy static store of [Example] snapshot data.
public class SnapshotStore {
  private final HashMap<Query<?>, HashMap<Example, Object>> queries = new HashMap<>();

  public SnapshotStore() {}

  public <T> void verify(Example example, Query<T> query) {
    var actual = query.compute(example, this);
    var expected = query(example, query);
    assertEquals(expected, actual);
  }

  public <T> T query(Example example, Query<T> query) {
    return query(example, query, new LinkedHashSet<>());
  }

  private <T> T query(Example example, Query<T> query, Set<Query<?>> pending) {
    // Check and report cycles
    if (!pending.add(query)) {
      throw new DependencyCycleException(pending, query);
    }

    try {
      // Try to load cached in-memory, else load cached from disk, else compute
      var queryStore = queries.computeIfAbsent(query, _ -> new HashMap<>());
      var queryData = queryStore.computeIfAbsent(example, _ -> {
        var path = Paths.getResource(getClass(), example.type()).resolve(query.name()).resolve(example.rpath());

        // Try to load snapshot
        if (!TestConfig.OVERRIDE_SNAPSHOTS && Files.exists(path)) {
          try {
            return query.deserialize(path, example, this);
          } catch (Exception e) {
            throw new RuntimeException("Failed to load snapshot for " + path, e);
          }
        }

        // Can't use snapshot, instead compute
        var next = query.oracle(example, this);

        // Save snapshot
        if (!example.options().contains(DONT_SAVE_SNAPSHOTS)) {
          Files.createDirectories(path.getParent());
          try {
            query.serialize(next, path, example, this);
          } catch (Exception e) {
            throw new RuntimeException("Failed to save snapshot for " + path, e);
          }
        }

        return next;
      });
      return query.dataClass().cast(queryData);
    } catch (DependencyCycleException | TestAbortedException e) {
      throw e;
    } catch (Exception e) {
      throw new TestAbortedException("Failed to load snapshot or compute dependency of " + query.name(), e);
    } finally {
      pending.remove(query);
    }
  }

  private static class DependencyCycleException extends RuntimeException {
    public DependencyCycleException(Set<Query<?>> pending, Query<?> next) {
      super("Dependency cycle: " + Strings.join(" -> ", Query::name, pending) + " --> " + next.name());
    }
  }
}
