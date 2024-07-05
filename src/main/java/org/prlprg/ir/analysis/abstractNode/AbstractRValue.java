package org.prlprg.ir.analysis.abstractNode;

import com.google.common.collect.ImmutableSet;
import javax.annotation.Nullable;
import org.prlprg.ir.cfg.Constant;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Pair;
import org.prlprg.util.SmallListSet;

/**
 * The possible {@linkplain RValue R SEXPs} at a particular {@linkplain Instr instruction} in any
 * interpretation trace.
 */
public sealed interface AbstractRValue extends AbstractNode<AbstractRValue> {
  record ValueOrigin(RValue value, @Nullable Instr origin, int recursionLevel) {
    @PrintMethod
    private void print(Printer p) {
      p.print(value.id());
      if (origin != null) {
        p.print(':');
        p.print(origin.id());
      }
    }

    @Override
    public String toString() {
      return Printer.toString(this);
    }
  }

  AbstractRValue BOTTOM = new AbstractRValueImpl(ImmutableSet.of(), RTypes.NOTHING, false);
  AbstractRValue UNBOUND = of(new Constant(SEXPs.UNBOUND_VALUE), null, 0);
  AbstractRValue TAINTED = new AbstractRValueImpl(ImmutableSet.of(), RTypes.ANY, true);

  static AbstractRValue of(RValue value, @Nullable Instr origin, int recursionLevel) {
    return new AbstractRValueImpl(
        ImmutableSet.of(new ValueOrigin(value, origin, recursionLevel)), value.type(), false);
  }

  ImmutableSet<ValueOrigin> origins();

  RType type();

  boolean isUnknown();

  default boolean hasSingleOrigin() {
    return origins().size() == 1;
  }

  default @Nullable ValueOrigin singleOrigin() {
    return hasSingleOrigin() ? origins().iterator().next() : null;
  }

  default Maybe isUnboundValue() {
    if (isUnknown()) {
      return Maybe.MAYBE;
    }
    Maybe result = null;
    for (var o : origins()) {
      var update = o.value().equals(new Constant(SEXPs.UNBOUND_VALUE));
      result = Maybe.intersection(result, update);
    }
    return result == null ? Maybe.NO : result;
  }
}

record AbstractRValueImpl(
    @Override ImmutableSet<ValueOrigin> origins, @Override RType type, @Override boolean isUnknown)
    implements AbstractRValue {
  AbstractRValueImpl {
    if (isUnknown && (!origins.isEmpty() || !type.isNothing())) {
      throw new IllegalArgumentException("An unknown value has no origins and nothing type");
    }
  }

  static final int MAX_VALUES = 5;

  @Override
  public Pair<AbstractResult, AbstractRValue> merge(AbstractRValue other) {
    var o =
        switch (other) {
          case AbstractRValueImpl r -> r;
        };

    if (isUnknown) {
      return Pair.of(AbstractResult.NONE, this);
    }
    if (type.isNothing()) {
      return Pair.of(o.type.isNothing() ? AbstractResult.NONE : AbstractResult.UPDATED, other);
    }
    if (o.isUnknown) {
      return Pair.of(AbstractResult.LOST_PRECISION, TAINTED);
    }

    var newValues = new SmallListSet<ValueOrigin>(MAX_VALUES + 1);
    newValues.addAll(origins);
    var changed = false;
    for (var origin : o.origins) {
      if (newValues.add(origin)) {
        changed = true;
        if (newValues.size() > MAX_VALUES) {
          return Pair.of(AbstractResult.LOST_PRECISION, TAINTED);
        }
      }
    }
    var newType = RTypes.union(type, o.type);
    changed = changed || !type.equals(newType);

    return Pair.of(
        changed ? AbstractResult.UPDATED : AbstractResult.NONE,
        new AbstractRValueImpl(ImmutableSet.copyOf(newValues), newType, false));
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (isUnknown) {
      w.write("??");
    } else {
      w.write("{");
      var first = true;
      for (var origin : origins) {
        if (!first) {
          w.write(" | ");
        }
        first = false;
        p.print(origin);
      }
      w.write("}");
    }
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
