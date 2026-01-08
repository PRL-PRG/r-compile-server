package org.prlprg.util;

import com.google.common.collect.*;
import java.util.*;
import java.util.function.*;
import javax.annotation.*;
import org.jspecify.annotations.*;

public class CacheMap<K, V> {
  private final Map<K, V> delegate = new HashMap<>();
  private final Function<K, V> compute;

  public CacheMap(Function<K, V> compute) {
    this.compute = compute;
  }

  public V get(K key) {
    return delegate.computeIfAbsent(key, compute);
  }
}
