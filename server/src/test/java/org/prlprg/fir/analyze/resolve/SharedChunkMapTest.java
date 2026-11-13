package org.prlprg.fir.analyze.resolve;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Random;
import org.junit.jupiter.api.Test;

class SharedChunkMapTest {
  private static final int KEYS = 300;
  private static final int CONFLICT = -1;

  /// Random copies, puts and joins of a few maps give the same results as on [HashMap]s, and
  /// [SharedChunkMap#subsumes] tells whether a join changes a map.
  @Test
  void testSameAsHashMap() {
    var random = new Random(0);
    for (var run = 0; run < 100; run++) {
      var maps = new ArrayList<SharedChunkMap<Integer, Integer>>();
      var models = new ArrayList<Map<Integer, Integer>>();
      maps.add(new SharedChunkMap<>());
      models.add(new HashMap<>());
      for (var step = 0; step < 500; step++) {
        var i = random.nextInt(maps.size());
        switch (random.nextInt(4)) {
          case 0 -> {
            var copy = maps.get(i).copy();
            var modelCopy = new HashMap<>(models.get(i));
            if (maps.size() < 6) {
              maps.add(copy);
              models.add(modelCopy);
            } else {
              var replaced = random.nextInt(maps.size());
              maps.set(replaced, copy);
              models.set(replaced, modelCopy);
            }
          }
          case 1 -> {
            var key = random.nextInt(KEYS);
            var value = random.nextInt(3);
            maps.get(i).put(key, value);
            models.get(i).put(key, value);
          }
          default -> {
            var j = random.nextInt(maps.size());
            maps.get(i).join(maps.get(j), CONFLICT);
            join(models.get(i), Map.copyOf(models.get(j)));
          }
        }

        for (var k = 0; k < maps.size(); k++) {
          for (var key = 0; key < KEYS; key++) {
            assertEquals(models.get(k).get(key), maps.get(k).get(key));
          }
          assertEquals(models.get(k).hashCode(), maps.get(k).hashCode());
        }
        var a = random.nextInt(maps.size());
        var b = random.nextInt(maps.size());
        var joined = new HashMap<>(models.get(a));
        join(joined, Map.copyOf(models.get(b)));
        assertEquals(joined.equals(models.get(a)), maps.get(a).subsumes(maps.get(b), CONFLICT));
        assertEquals(models.get(a).equals(models.get(b)), maps.get(a).equals(maps.get(b)));
      }
    }
  }

  private static void join(Map<Integer, Integer> model, Map<Integer, Integer> other) {
    other.forEach(
        (key, otherValue) -> {
          var value = model.get(key);
          model.put(key, value == null || value.equals(otherValue) ? otherValue : CONFLICT);
        });
  }
}
