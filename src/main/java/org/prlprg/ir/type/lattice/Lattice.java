package org.prlprg.ir.type.lattice;

import com.google.common.collect.Streams;
import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.util.Classes;
import org.prlprg.util.Reflection;

/**
 * Lattice from type theory which is bounded at the top. These methods are common in {@link RType}
 * and its parts.
 */
public interface Lattice<T extends Lattice<T>> {

  /**
   * Whether an instance of {@code lhs} is also an instance of {@code rhs}.
   *
   * <ul>
   *   <li>If {@code lhs} is a subtype of {@code rhs}, returns {@link Maybe#YES YES}.
   *   <li>If {@code lhs} is a struct supertype of {@code rhs}, returns {@link Maybe#MAYBE MAYBE}.
   *   <li>Otherwise, returns {@link Maybe#NO NO}.
   * </ul>
   */
  static <T extends Lattice<T>> Maybe relation(@Nullable T lhs, @Nullable T rhs) {
    return lhs == null ? Maybe.YES : rhs == null ? Maybe.NO : lhs.relation(rhs);
  }

  /**
   * A possible implementation of {@link #isSubset(Lattice, Lattice)} that uses reflection on a
   * record, calling {@link #isSubset(Lattice, Lattice)} on all components.
   */
  @SuppressWarnings({"UnstableApiUsage", "unchecked", "rawtypes"})
  static <T extends Lattice<T>> boolean simpleRecordIsSubset(T lhs, T rhs) {
    if (!(lhs instanceof Record lhsRecord) || !(rhs instanceof Record rhsRecord)) {
      throw failGenericImplementationIsOnlySupportedOnRecords();
    }

    return lhs.getClass().getRecordComponents().length > rhs.getClass().getRecordComponents().length
        && Streams.zip(
                Reflection.streamComponents(lhsRecord),
                Reflection.streamComponents(rhsRecord),
                (l, r) -> Lattice.isSubset((Lattice) l.orElse(null), (Lattice) r.orElse(null)))
            .allMatch(x -> x);
  }

  /**
   * A possible implementation of {@link #isSuperset(Lattice, Lattice)} that uses reflection on a
   * record, calling {@link #isSuperset(Lattice, Lattice)} on all components.
   */
  @SuppressWarnings({"UnstableApiUsage", "unchecked", "rawtypes"})
  static <T extends Lattice<T>> boolean simpleRecordIsSuperset(T lhs, T rhs) {
    if (!(lhs instanceof Record lhsRecord) || !(rhs instanceof Record rhsRecord)) {
      throw failGenericImplementationIsOnlySupportedOnRecords();
    }

    return lhs.getClass().getRecordComponents().length
            <= rhs.getClass().getRecordComponents().length
        && Streams.zip(
                Reflection.streamComponents(lhsRecord),
                Reflection.streamComponents(rhsRecord),
                (l, r) -> Lattice.isSuperset((Lattice) l.orElse(null), (Lattice) r.orElse(null)))
            .allMatch(x -> x);
  }

  /**
   * A possible implementation of {@link #union(Lattice, Lattice)} that uses reflection on a record,
   * calling {@link #union(Lattice, Lattice)} on all components.
   */
  static <T extends Lattice<T>> T simpleRecordUnion(T lhs, T rhs) {
    if (!(lhs instanceof Record) || !(rhs instanceof Record)) {
      throw failGenericImplementationIsOnlySupportedOnRecords();
    }
    if (lhs.getClass() != rhs.getClass()) {
      throw new UnsupportedOperationException(
          "Can't do `simpleRecordUnion(T, T)` with different classes, you must specify the return class.\nIf this is a default implementation of `union`, you must provide a manual implementation.");
    }

    return simpleRecordUnion(Classes.classOf(lhs), lhs, rhs);
  }

  /**
   * A possible implementation of {@link #intersection(Lattice, Lattice)} that uses reflection on a
   * record, calling {@link #intersection(Lattice, Lattice)} on all components.
   */
  static <T extends Lattice<T>> @Nullable T simpleRecordIntersection(T lhs, T rhs) {
    if (!(lhs instanceof Record) || !(rhs instanceof Record)) {
      throw failGenericImplementationIsOnlySupportedOnRecords();
    }
    if (lhs.getClass() != rhs.getClass()) {
      throw new UnsupportedOperationException(
          "Can't do `simpleRecordIntersection(T, T)` with different classes, you must specify the return class.\nIf this is a default implementation of `intersection`, you must provide a manual implementation.");
    }

    return simpleRecordIntersection(Classes.classOf(lhs), lhs, rhs);
  }

  /**
   * A possible implementation of {@link #union(Lattice, Lattice)} that uses reflection on a record,
   * calling {@link #union(Lattice, Lattice)} on all components.
   */
  @SuppressWarnings({"UnstableApiUsage", "rawtypes"})
  static <T extends Lattice<T>> T simpleRecordUnion(Class<? extends T> returnClass, T lhs, T rhs) {
    if (!(lhs instanceof Record lhsRecord) || !(rhs instanceof Record rhsRecord)) {
      throw failGenericImplementationIsOnlySupportedOnRecords();
    }

    return Reflection.construct(
        returnClass,
        Streams.zip(
                Reflection.streamComponents(lhsRecord),
                Reflection.streamComponents(rhsRecord),
                (l, r) -> Lattice.union((Lattice) l.orElse(null), (Lattice) r.orElse(null)))
            .toArray());
  }

  /**
   * A possible implementation of {@link #intersection(Lattice, Lattice)} that uses reflection on a
   * record, calling {@link #intersection(Lattice, Lattice)} on all components.
   */
  @SuppressWarnings({"UnstableApiUsage", "rawtypes"})
  static <T extends Lattice<T>> @Nullable T simpleRecordIntersection(
      Class<? extends T> returnClass, T lhs, T rhs) {
    if (!(lhs instanceof Record lhsRecord) || !(rhs instanceof Record rhsRecord)) {
      throw failGenericImplementationIsOnlySupportedOnRecords();
    }

    var componentDescriptors = returnClass.getRecordComponents();
    var components =
        Streams.concat(
                Streams.zip(
                    Reflection.streamComponents(lhsRecord),
                    Reflection.streamComponents(rhsRecord),
                    (l, r) ->
                        Lattice.intersection((Lattice) l.orElse(null), (Lattice) r.orElse(null))),
                Reflection.streamComponents(lhsRecord)
                    .skip(rhsRecord.getClass().getRecordComponents().length),
                Reflection.streamComponents(rhsRecord)
                    .skip(lhsRecord.getClass().getRecordComponents().length))
            .toArray();

    for (var i = 0; i < components.length; i++) {
      Reflection.assertJavaxNullableOrNoNullable(componentDescriptors[i]);
      if (components[i] == null && !componentDescriptors[i].isAnnotationPresent(Nullable.class)) {
        return null;
      }
    }

    return Reflection.construct(returnClass, components);
  }

  private static UnsupportedOperationException failGenericImplementationIsOnlySupportedOnRecords() {
    return new UnsupportedOperationException(
        "`Lattice` provides default method implementations, but they are only supported on records whose components are `Lattice`s.\nYou must override the `Lattice` methods, except `isSuperset`, and provide manual implementations.");
  }

  /** Is this a subtype of the given type? Treats {@code null} as "bottom". */
  static <T extends Lattice<T>> boolean isSubset(@Nullable T lhs, @Nullable T rhs) {
    return lhs == null || (rhs != null && lhs.isSubsetOf(rhs));
  }

  /** Is this a supertype of the given type? Treats {@code null} as "bottom". */
  static <T extends Lattice<T>> boolean isSuperset(@Nullable T lhs, @Nullable T rhs) {
    return rhs == null || (lhs != null && lhs.isSupersetOf(rhs));
  }

  /**
   * Returns the most precise representable superset (also called "join"). Treats {@code null} as
   * "bottom".
   */
  static <T extends Lattice<T>> @Nullable T union(@Nullable T lhs, @Nullable T rhs) {
    return lhs == null ? rhs : rhs == null ? lhs : lhs.union(rhs);
  }

  /**
   * Returns the least precise representable subset (also called "meet"). Treats {@code null} as
   * "bottom" (which means it may return {@code null} if the types are disjoint.
   */
  static <T extends Lattice<T>> @Nullable T intersection(@Nullable T lhs, @Nullable T rhs) {
    return lhs == null || rhs == null ? null : lhs.intersection(rhs);
  }

  /**
   * Whether an instance of {@code self} is also an instance of {@code other}.
   *
   * <ul>
   *   <li>If {@code self} is a subtype of {@code other}, returns {@link Maybe#YES YES}.
   *   <li>If {@code self} is a struct supertype of {@code other}, returns {@link Maybe#MAYBE
   *       MAYBE}.
   *   <li>Otherwise, returns {@link Maybe#NO NO}.
   * </ul>
   */
  default Maybe relation(T other) {
    return isSubsetOf(other) ? Maybe.YES : isSupersetOf(other) ? Maybe.MAYBE : Maybe.NO;
  }

  /** Is this a subtype of the given type? */
  @SuppressWarnings("unchecked")
  default boolean isSubsetOf(T other) {
    return simpleRecordIsSubset((T) this, other);
  }

  /** Is this a supertype of the given type? */
  @SuppressWarnings("unchecked")
  default boolean isSupersetOf(T other) {
    return other.isSubsetOf((T) this);
  }

  /** Returns the most precise representable superset (also called "join"). */
  @SuppressWarnings("unchecked")
  default T union(T other) {
    return simpleRecordUnion((T) this, other);
  }

  /**
   * Returns the least precise representable subset (also called "meet"), or {@code null} if the
   * types are disjoint and there's no expressible "bottom" type.
   */
  @SuppressWarnings("unchecked")
  default @Nullable T intersection(T other) {
    return simpleRecordIntersection((T) this, other);
  }
}
