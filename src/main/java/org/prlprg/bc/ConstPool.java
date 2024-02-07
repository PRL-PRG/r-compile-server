package org.prlprg.bc;

import com.google.common.base.Objects;
import com.google.common.collect.ForwardingCollection;
import com.google.common.collect.ImmutableList;
import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import org.prlprg.sexp.*;
import org.prlprg.util.Either;
import org.prlprg.util.Pair;

import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;

/**
 * A pool (array) of constants. Underneath this is an immutable list, but the elements are only accessible with typed
 * integers.
 */
@SuppressFBWarnings(
        value = "JCIP_FIELD_ISNT_FINAL_IN_IMMUTABLE_CLASS",
        justification = "The class isn't technically immutable but is after we use the thread-unsafe builder, " +
                "so practically we treat it as immutable"
)
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

    /**
     * Get the element at the given pool index
     *
     * @throws WrongPoolException        if the index is for a different pool
     * @throws IndexOutOfBoundsException if the index is out of bounds
     */
    public SEXP get(Idx idx) {
        if (consts == null) {
            throw new IllegalStateException("ConstPool is not yet built");
        }
        return consts.get(idx.unwrapIdx(this));
    }

    /**
     * Get the element at the given pool index
     *
     * @throws WrongPoolException        if the index is for a different pool
     * @throws IndexOutOfBoundsException if the index is out of bounds
     */
    public <S extends SEXP> S get(TypedIdx<S> idx) {
        if (consts == null) {
            throw new IllegalStateException("ConstPool is not yet built");
        }
        assert idx.checkType();
        @SuppressWarnings("unchecked")
        var res = (S) consts.get(idx.unwrapIdx(this));
        return res;
    }


    /**
     * If the SEXP is a constant, returns its index. Otherwise returns null.
     */
    public <S extends SEXP> @Nullable TypedIdx<S> indexOf(S c) {
        if (consts == null) {
            throw new IllegalStateException("ConstPool is not yet built");
        }
        var i = consts.indexOf(c);
        if (i == -1) {
            return null;
        }
        // This is only valid because TypedIdx is covariant, and only accepted because Java erases generics.
        // The conversion from Class<? extends S> to Class<S> changes the generic.
        @SuppressWarnings("unchecked") var idx = new TypedIdx<>(this, i, (Class<S>) c.getClass());
        assert idx.checkType();
        return idx;
    }

    /**
     * Iterate all indices
     */
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

    /**
     * Create from the raw GNU-R representation.
     *
     * @return The pool and a function to create pool indices from raw integers, since that isn't ordinarily exposed.
     */
    static Pair<ConstPool, MakeIdx> fromRaw(List<SEXP> consts) throws BcFromRawException {
        var builder = new Builder();
        for (var c : consts) {
            builder.add(c);
        }

        var pool = builder.build();
        return new Pair<>(pool, new MakeIdx(pool));
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder("=== CONSTS " + debugId() + " ===");
        var idx = 0;
        for (var c : this) {
            var cStr = c.toString();
            sb.append(String.format("\n%3d: ", idx++));
            if (cStr.contains(System.lineSeparator())) {
                sb.append(System.lineSeparator()).append(c).append(System.lineSeparator());
            } else {
                sb.append(c);
            }
        }
        return sb.toString();
    }

    private String debugId() {
        return "@" + hashCode();
    }

    /**
     * A typed index into a bytecode pool.
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
         */
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

    @SuppressFBWarnings(
            value = "EQ_DOESNT_OVERRIDE_EQUALS",
            justification = "Idx and TypedIdx only compare `pool` and `index`, we want different types to be equal"
    )
    public static final class TypedIdx<S extends SEXP> extends Idx {
        private final Class<S> sexpInterface;

        private TypedIdx(ConstPool pool, int idx, Class<S> sexpInterface) {
            super(pool, idx);
            if (!SEXP.class.isAssignableFrom(sexpInterface)) {
                throw new IllegalArgumentException("sexpInterface must be inherit SEXP: " + sexpInterface);
            }
            this.sexpInterface = sexpInterface;
        }

        private boolean checkType() {
            // The cast to Idx is required because the TypedIdx version does an `assert`.
            return sexpInterface.isInstance(pool.get((Idx) this));
        }

        @Override
        public String toString() {
            return "Idx(" + idx + " of " + pool.debugId() + " type " + sexpInterface.getSimpleName() + ")";
        }
    }

    final static class MakeIdx {
        private final ConstPool pool;

        private MakeIdx(ConstPool pool) {
            this.pool = pool;
        }

        TypedIdx<LangSXP> lang(int i) {
            return of(i, LangSXP.class);
        }

        TypedIdx<RegSymSXP> sym(int i) {
            return of(i, RegSymSXP.class);
        }

        @Nullable
        TypedIdx<RegSymSXP> symOrNil(int i) {
            return tryOf(i, RegSymSXP.class);
        }

        @Nullable
        TypedIdx<LangSXP> langOrNegative(int i) {
            return i >= 0 ? tryOf(i, LangSXP.class) : null;
        }

        @Nullable
        TypedIdx<IntSXP> intOrOther(int i) {
            return tryOf(i, IntSXP.class);
        }

        @Nullable
        TypedIdx<StrOrRegSymSXP> strOrSymOrNil(int i) {
            var asStrOrSymbol = tryOf(i, StrOrRegSymSXP.class);
            if (asStrOrSymbol != null) {
                return asStrOrSymbol;
            }
            var asNil = tryOf(i, NilSXP.class);
            if (asNil != null) {
                return null;
            } else {
                throw new IllegalArgumentException("Expected StrSXP, SymSXP or NilSXP, got " + pool.get(new Idx(pool, i)));
            }
        }

        @Nullable
        Either<TypedIdx<StrSXP>, TypedIdx<NilSXP>> strOrNilOrOther(int i) {
            var asSymbol = tryOf(i, StrSXP.class);
            if (asSymbol != null) {
                return Either.left(asSymbol);
            }
            var asNil = tryOf(i, NilSXP.class);
            if (asNil != null) {
                return Either.right(asNil);
            } else {
                return null;
            }
        }

        TypedIdx<VecSXP> formalsBodyAndMaybeSrcRef(int i) {
            var idx = of(i, VecSXP.class);

            // Check vector shape
            var vec = pool.get(idx);
            if (vec.size() != 2 && vec.size() != 3) {
                throw new IllegalArgumentException("Malformed formals/body/srcref vector, expected length 2 or 3, got " + vec);
            }
            if (!(vec.get(0) instanceof ListSXP)) {
                throw new IllegalArgumentException("Malformed formals/body/srcref vector, expected first element to be a list (formals), got " + vec.get(0));
            }

            return idx;
        }

        Idx any(int i) {
            return new Idx(pool, i);
        }

        private <S extends SEXP> TypedIdx<S> of(int i, Class<S> sexpInterface) {
            var idx = new TypedIdx<>(pool, i, sexpInterface);
            if (!idx.checkType()) {
                // The cast to Idx is required because the TypedIdx version does an `assert`.
                throw new IllegalArgumentException("Expected " + sexpInterface.getSimpleName() + ", got " + pool.get((Idx) idx));
            }
            return idx;
        }

        private <S extends SEXP> @Nullable TypedIdx<S> tryOf(int i, Class<S> sexpInterface) {
            var idx = new TypedIdx<>(pool, i, sexpInterface);
            if (!idx.checkType()) {
                return null;
            }
            return idx;
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
            // This only works because TypedIdx is covariant the and generic gets erased.
            // We actually cast TypedIdx<something more specific than S> into TypedIdx<S>.
            @SuppressWarnings("unchecked") var idx = (TypedIdx<S>) consts.computeIfAbsent(c, (ignored) -> new TypedIdx<S>(pool, consts.size(), (Class<S>) c.getClass()));
            return idx;
        }

        /**
         * Append instructions.
         */
        public <S extends SEXP> ImmutableList<TypedIdx<S>> addAll(Collection<? extends S> c) {
            var builder = ImmutableList.<TypedIdx<S>>builder();
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
