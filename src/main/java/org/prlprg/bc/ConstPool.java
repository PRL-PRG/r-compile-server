package org.prlprg.bc;

import com.google.common.base.Objects;
import com.google.common.collect.ForwardingCollection;
import com.google.common.collect.ImmutableList;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Pair;

import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import java.util.*;
import java.util.function.Function;

/**
 * A pool (array) of constants. Underneath this is an immutable list, but the elements are only accessible with typed
 * integers.
 */
@Immutable
public final class ConstPool extends ForwardingCollection<SEXP> {
    @Nullable
    private ImmutableList<SEXP> consts;

    private ConstPool() {
    }

    @Override
    protected Collection<SEXP> delegate() {
        if (consts == null) {
            throw new IllegalStateException("ConstPool is not yet built");
        }
        return consts;
    }

    /** Get the element at the given pool index
     * @throws WrongPoolException if the index is for a different pool
     * @throws IndexOutOfBoundsException if the index is out of bounds
     */
    public SEXP get(Idx idx) {
        if (consts == null) {
            throw new IllegalStateException("ConstPool is not yet built");
        }
        return consts.get(idx.unwrapIdx(this));
    }

    /** Get the element at the given pool index
     * @throws WrongPoolException if the index is for a different pool
     * @throws IndexOutOfBoundsException if the index is out of bounds
     */
    public <S extends SEXP> S get(TypedIdx<S> idx) {
        if (consts == null) {
            throw new IllegalStateException("ConstPool is not yet built");
        }
        @SuppressWarnings("unchecked") var res = (S)consts.get(idx.unwrapIdx(this));
        return res;
    }


    /** If the SEXP is a constant, returns its index. Otherwise returns null. */
    public <S extends SEXP> @Nullable TypedIdx<S> indexOf(S c) {
        if (consts == null) {
            throw new IllegalStateException("ConstPool is not yet built");
        }
        var idx = consts.indexOf(c);
        if (idx == -1) {
            return null;
        }
        return new TypedIdx<>(this, idx, c.getClass());
    }

    /** Iterate all indices */
    public Iterable<Idx> indices() {
        return () -> new Iterator<>() {
            int i = 0;

            @Override
            public boolean hasNext() {
                if (consts == null) {
                    throw new IllegalStateException("ConstPool is not yet built");
                }
                return i < consts.size();
            }

            @Override
            public Idx next() {
                if (!hasNext()) {
                    throw new IndexOutOfBoundsException();
                }
                return new Idx(ConstPool.this, i++);
            }
        };
    }

    /** Create from the raw GNU-R representation.
     *
     * @return The pool and a function to create pool indices from raw integers, since that isn't ordinarily exposed.
     */
    static Pair<ConstPool, Function<Integer, Idx>> fromRaw(List<SEXP> consts) throws BcFromRawException {
        var builder = new Builder();
        for (var c : consts) {
            builder.add(c);
        }

        var pool = builder.build();
        return new Pair<>(pool, (i) -> new Idx(pool, i));
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder("=== CONSTS " + debugId() + " ===");
        var idx = 0;
        for (var c : this) {
            sb.append("\n").append(idx++).append(": ").append(c);
        }
        return sb.toString();
    }

    private String debugId() {
        return "@" + hashCode();
    }

    /** A typed index into a bytecode pool.
     * <p>
     * It also contains a reference to the owner pool which is checked at runtime for extra safety.
     */
    public sealed static class Idx permits TypedIdx {
        protected final ConstPool pool;
        protected final int idx;

        private Idx(ConstPool pool, int idx) {
            this.pool = pool;
            this.idx = idx;
        }

        /**
         * Return the underlying index if the given pool is the one this was originally created with.
         *
         * @throws WrongPoolException if the given pool is not the one this was originally created with
         * */
        protected int unwrapIdx(ConstPool parent) {
            if (parent != pool) {
                throw new WrongPoolException();
            }
            return idx;
        }

        @Override
        public boolean equals(Object o) {
            if (this == o) return true;
            if (!(o instanceof Idx idx1)) return false;
            return idx == idx1.idx && Objects.equal(pool, idx1.pool);
        }

        @Override
        public int hashCode() {
            return Objects.hashCode(pool, idx);
        }

        @Override
        public String toString() {
            return "Idx(" + idx + " of " + pool.debugId() + ")";
        }
    }

    @SuppressWarnings("unused")
    public static final class TypedIdx<S extends SEXP> extends Idx {
        private final Class<? extends SEXP> sexpClass;

        private TypedIdx(ConstPool pool, int idx, Class<? extends SEXP> sexpClass) {
            super(pool, idx);
            this.sexpClass = sexpClass;
        }

        @Override
        public String toString() {
            return "Idx(" + idx + " of " + pool.debugId() + " type " + sexpClass.getSimpleName() + ")";
        }
    }

    public static class WrongPoolException extends RuntimeException {
        private WrongPoolException() {
            super("Wrong pool");
        }
    }

    /**
     * A builder class for creating constant pools.
     * <p>
     * Not synchronized, so don't use from multiple threads.
     */
    public static class Builder {
        private final ConstPool pool = new ConstPool();
        private final LinkedHashMap<SEXP, Idx> consts = new LinkedHashMap<>();

        /**
         * Create a new builder.
         */
        public Builder() {
        }

        /**
         * Append a constant and return the index.
         */
        public <S extends SEXP> TypedIdx<S> add(S c) {
            @SuppressWarnings("unchecked") var idx = (TypedIdx<S>)consts.computeIfAbsent(c, (ignored) -> new TypedIdx<S>(pool, consts.size(), c.getClass()));
            return idx;
        }

        /**
         * Append instructions.
         */
        public ImmutableList<Idx> addAll(Collection<? extends SEXP> c) {
            var builder = ImmutableList.<Idx>builder();
            for (var e : c) {
                builder.add(add(e));
            }
            return builder.build();
        }

        /**
         * Finish building the pool.
         *
         * @return The pool.
         */
        public ConstPool build() {
            pool.consts = ImmutableList.copyOf(consts.sequencedKeySet());
            return pool;
        }
    }
}
