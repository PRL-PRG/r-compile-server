package org.prlprg.util;

/** A type with one instance, {@link Unit#SINGLETON} */
public final class Unit {
  @SuppressWarnings("InstantiationOfUtilityClass")
  public static final Unit SINGLETON = new Unit();

  private Unit() {}
}
