package org.prlprg.sexp;

import java.util.*;
import java.util.stream.Collectors;
import javax.annotation.Nullable;

/**
 * A mutable {@link LocalEnvSXP}: a mutable environment which has ENCLOS, FRAME, HASHTAB, and ATTR.
 *
 * <p>Most other SEXPs are immutable. The reason these are mutable is because we preserve the
 * mutability of SEXPs in R. In R, if you assign an SEXP to a variable and then modify it, for other
 * SEXP types the variable won't change, but for environments it will.
 */
public final class RegEnvSXP implements LocalEnvSXP {
  private boolean isInitialized;
  private boolean isLocked;
  private @Nullable EnvSXP enclos;
  private final SequencedMap<String, SEXP> frame;
  private @Nullable Attributes attributes;

  /**
   * Create an uninitialized environment. You must then call {@link #init} before any other methods.
   */
  public static RegEnvSXP uninitialized() {
    return new RegEnvSXP();
  }

  private RegEnvSXP() {
    this.isInitialized = false;
    this.isLocked = false;
    this.enclos = null;
    this.frame = new LinkedHashMap<>();
    this.attributes = null;
  }

  /** Create a new empty (initialized, unlocked) environment. */
  RegEnvSXP(EnvSXP enclos) {
    this.isInitialized = true;
    this.isLocked = false;
    this.enclos = enclos;
    this.frame = new LinkedHashMap<>();
    this.attributes = Attributes.NONE;
  }

  /** Initialize an uninitialized environment with data. */
  public void init(boolean isLocked, EnvSXP enclos, ListSXP frame, Attributes attributes) {
    if (isInitialized) {
      throw new IllegalStateException("Already initialized");
    }
    this.isInitialized = true;
    this.isLocked = isLocked;
    this.enclos = enclos;
    for (var elem : frame) {
      this.frame.put(Objects.requireNonNull(elem.tag()), elem.value());
    }
    this.attributes = attributes;
  }

  @Override
  public EnvSXP enclos() {
    checkInitialized();
    return Objects.requireNonNull(enclos);
  }

  @Override
  public SequencedMap<String, SEXP> frame() {
    checkInitialized();
    return Collections.unmodifiableSequencedMap(Objects.requireNonNull(frame));
  }

  @Override
  public Attributes attributes() {
    checkInitialized();
    return Objects.requireNonNull(attributes);
  }

  @Override
  public boolean isLocked() {
    checkInitialized();
    return isLocked;
  }

  /**
   * Lookup a binding in the environment or parents.
   *
   * @return {@code null} if not found.
   */
  @Override
  public @Nullable SEXP get(String name) {
    checkInitialized();
    var frame = Objects.requireNonNull(this.frame);
    var inFrame = frame.get(name);
    if (inFrame != null) {
      return inFrame;
    }
    var enclos = Objects.requireNonNull(this.enclos);
    return enclos.get(name);
  }

  /** Change the environment's parent. */
  public void setEnclos(EnvSXP enclos) {
    checkInitialized();
    this.enclos = enclos;
  }

  /** Change the environment's attributes. */
  public void setAttributes(Attributes attributes) {
    checkInitialized();
    this.attributes = attributes;
  }

  /**
   * Lock the environment. Trying to mutate it afterward will throw {@link IllegalStateException}.
   *
   * @throws IllegalStateException If the environment is already locked.
   */
  public void lock() {
    checkInitialized();
    if (isLocked) {
      throw new IllegalStateException("Environment is already locked");
    }
    isLocked = true;
  }

  /**
   * Modify a binding in the environment. Call with {@code null} to remove.
   *
   * @throws IllegalStateException if the environment is locked.
   */
  public void set(String name, @Nullable SEXP value) {
    checkInitialized();
    if (isLocked) {
      throw new IllegalStateException("Environment is locked");
    }
    var frame = Objects.requireNonNull(this.frame);
    if (value == null) {
      frame.remove(name);
    } else {
      frame.put(name, value);
    }
  }

  @Override
  public String toString() {
    return SEXPs.toString(
        this,
        "isInitialized=" + isInitialized,
        "enclos=" + enclos,
        frame.isEmpty()
            ? ""
            : "\n  ; "
                + frame.sequencedEntrySet().stream()
                    .map(e -> e.getKey() + "=" + e.getValue())
                    .collect(Collectors.joining("\n  , ")));
  }

  /**
   * Create a copy of this environment with the given attributes.
   *
   * <p>This does <i>not</i> mutate the environment and change its own attributes. Call {@link
   * #setAttributes} to do that.
   */
  @Override
  public LocalEnvSXP withAttributes(Attributes attributes) {
    this.setAttributes(attributes);
    return this;
  }

  private void checkInitialized() {
    if (!isInitialized) {
      throw new IllegalStateException("Not initialized");
    }
  }
}
