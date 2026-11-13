package org.prlprg.fir.analyze.resolve;

import java.util.HashMap;
import java.util.Map;
import org.jspecify.annotations.Nullable;

/// A map whose copies share its entries in chunks: a copy is cheap, a write copies one chunk, and
/// [#join] and [#equals] skip the chunks that both maps share.
///
/// It can't be iterated, so the iteration order of its chunks doesn't matter.
final class SharedChunkMap<K, V> {
  private static final int CHUNKS = 64;

  /// The entries, by [#index] of their key. `null` is an empty chunk.
  private final @Nullable Map<K, V>[] chunks;

  /// Bit `i` is set iff no other map has `chunks[i]`, so this map may write it in place.
  private long owned = 0;

  @SuppressWarnings("unchecked")
  SharedChunkMap() {
    chunks = new Map[CHUNKS];
  }

  private SharedChunkMap(@Nullable Map<K, V>[] chunks) {
    this.chunks = chunks;
  }

  /// A copy that shares this map's chunks.
  SharedChunkMap<K, V> copy() {
    owned = 0;
    return new SharedChunkMap<>(chunks.clone());
  }

  @Nullable V get(K key) {
    var chunk = chunks[index(key)];
    return chunk == null ? null : chunk.get(key);
  }

  void put(K key, V value) {
    var i = index(key);
    var chunk = chunks[i];
    if (chunk == null || !value.equals(chunk.get(key))) {
      writable(i).put(key, value);
    }
  }

  /// Adds the entries of `other`. A key that both have with unequal values gets `conflict`.
  void join(SharedChunkMap<K, V> other, V conflict) {
    for (var i = 0; i < CHUNKS; i++) {
      var chunk = chunks[i];
      var otherChunk = other.chunks[i];
      if (chunk == otherChunk || otherChunk == null) {
        continue;
      }
      if (chunk == null) {
        share(other, i);
        continue;
      }

      var same = true;
      var written = false;
      for (var entry : otherChunk.entrySet()) {
        var value = chunk.get(entry.getKey());
        var otherValue = entry.getValue();
        if (value == otherValue || (value != null && value.equals(otherValue))) {
          continue;
        }
        same = false;
        if (value != null && value.equals(conflict)) {
          continue;
        }
        if (!written) {
          chunk = writable(i);
          written = true;
        }
        chunk.put(entry.getKey(), value == null ? otherValue : conflict);
      }
      // The chunks have the same entries, so share them, which makes later joins and comparisons
      // of the two maps skip it.
      if (same && chunk.size() == otherChunk.size()) {
        share(other, i);
      }
    }
  }

  /// Makes `chunks[i]` the chunk of `other`.
  private void share(SharedChunkMap<K, V> other, int i) {
    chunks[i] = other.chunks[i];
    owned &= ~(1L << i);
    other.owned &= ~(1L << i);
  }

  private Map<K, V> writable(int i) {
    var chunk = chunks[i];
    if (chunk == null || (owned & (1L << i)) == 0) {
      chunk = chunk == null ? new HashMap<>() : new HashMap<>(chunk);
      chunks[i] = chunk;
      owned |= 1L << i;
    }
    return chunk;
  }

  private static int index(Object key) {
    var hash = key.hashCode();
    return (hash ^ (hash >>> 16)) & (CHUNKS - 1);
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (!(o instanceof SharedChunkMap<?, ?> other)) {
      return false;
    }
    for (var i = 0; i < CHUNKS; i++) {
      var chunk = chunks[i];
      var otherChunk = other.chunks[i];
      if (chunk != otherChunk
          && !(chunk == null
              ? otherChunk.isEmpty()
              : otherChunk == null ? chunk.isEmpty() : chunk.equals(otherChunk))) {
        return false;
      }
    }
    return true;
  }

  /// The [Map#hashCode()] of a map with the same entries.
  @Override
  public int hashCode() {
    var hash = 0;
    for (var chunk : chunks) {
      if (chunk != null) {
        hash += chunk.hashCode();
      }
    }
    return hash;
  }
}
