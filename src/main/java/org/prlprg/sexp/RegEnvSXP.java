package org.prlprg.sexp;

import javax.annotation.Nullable;
import java.util.*;

/**
 * Environment which has ENCLOS, FRAME, HASHTAB, and ATTR.
 *
 * These are mutable, like they are in R. Most other SEXPs are immutable.
 */
public final class RegEnvSXP implements EnvSXP {
    private boolean isInitialized;
    private boolean isLocked;
    private @Nullable EnvSXP enclos;
    private SequencedMap<String, SEXP> frame;
    private @Nullable Attributes attributes;

    /** Create an uninitialized environment. You must then call {@link #init} before any other methods. */
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
    public RegEnvSXP(EnvSXP enclos) {
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

    /** The environment's parent. */
    public EnvSXP enclos() {
        checkInitialized();
        return Objects.requireNonNull(enclos);
    }

    @Override
    public @Nullable EnvSXP knownParent() {
        return enclos();
    }

    /** The bindings within this environment and not parents. */
    public SequencedMap<String, SEXP> frame() {
        checkInitialized();
        return Collections.unmodifiableSequencedMap(Objects.requireNonNull(frame));
    }

    /** The environment's attributes. */
    @Override
    public Attributes attributes() {
        checkInitialized();
        return Objects.requireNonNull(attributes);
    }

    /** Whether the environment is locked. */
    public boolean isLocked() {
        checkInitialized();
        return isLocked;
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

    /** Lock the environment.
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

    /** Lookup a binding in the environment or parents.
     *
     * @return {@code null} if not found. */
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

    /** Modify a binding in the environment. Call with {@code null} to remove.
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
        return "RegEnvSXP{" +
                "isInitialized=" + isInitialized +
                ", enclos=" + enclos +
                ", frame=" + frame +
                ", attr=" + attributes +
                '}';
    }

    @Override
    public RegEnvSXP withAttributes(Attributes attributes) {
        this.setAttributes(attributes);
        return this;
    }

    private void checkInitialized() {
        if (!isInitialized) {
            throw new IllegalStateException("Not initialized");
        }
    }
}
