package org.prlprg.util;

import java.util.Collection;
import java.util.Iterator;
import java.util.Set;
import java.util.WeakHashMap;

/**
 * Set version of {@link java.util.WeakHashMap}: all the keys are weakly refereced and when they get
 * garbage collected, the corresponding value is removed from the set.
 */
public class WeakHashSet<T> implements Set<T> {
  private final WeakHashMap<T, Nothing> map = new WeakHashMap<>();

  @Override
  public int size() {
    return map.size();
  }

  @Override
  public boolean isEmpty() {
    return map.isEmpty();
  }

  @SuppressWarnings("SuspiciousMethodCalls")
  @Override
  public boolean contains(Object o) {
    return map.containsKey(o);
  }

  @Override
  public Iterator<T> iterator() {
    return map.keySet().iterator();
  }

  @Override
  public Object[] toArray() {
    return map.keySet().toArray();
  }

  @Override
  public <T1> T1[] toArray(T1[] a) {
    return map.keySet().toArray(a);
  }

  @Override
  public boolean add(T t) {
    return map.put(t, null) == null;
  }

  @Override
  public boolean remove(Object o) {
    return map.remove(o) != null;
  }

  @Override
  public boolean containsAll(Collection<?> c) {
    return map.keySet().containsAll(c);
  }

  @Override
  public boolean addAll(Collection<? extends T> c) {
    boolean changed = false;
    for (var e : c) {
      changed |= add(e);
    }
    return changed;
  }

  @Override
  public boolean retainAll(Collection<?> c) {
    return map.keySet().retainAll(c);
  }

  @Override
  public boolean removeAll(Collection<?> c) {
    return map.keySet().removeAll(c);
  }

  @Override
  public void clear() {
    map.clear();
  }
}
