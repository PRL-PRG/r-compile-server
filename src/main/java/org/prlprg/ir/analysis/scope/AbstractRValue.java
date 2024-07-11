package org.prlprg.ir.analysis.scope;

import java.util.Collections;
import java.util.Set;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.Constant;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.NotImplementedError;
import org.prlprg.util.SmallListSet;

/**
 * The possible {@linkplain RValue R SEXPs} at a particular {@linkplain Instr instruction} in any
 * interpretation trace.
 */
public final class AbstractRValue implements AbstractNode<AbstractRValue> {
  public record ValueOrigin(RValue value, @Nullable Instr origin, int recursionLevel) {
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

  public static final AbstractRValue UNBOUND =
      new AbstractRValue(new Constant(SEXPs.UNBOUND_VALUE), null, 0);
  public static final AbstractRValue UNKNOWN =
      new AbstractRValue(Collections.emptySet(), RType.ANY, true);
  private static final int MAX_VALUES = 5;

  private Set<ValueOrigin> origins;
  private RType type;
  private boolean isUnknown;

  /** Creates an abstract value representing "bottom". */
  public AbstractRValue() {
    origins = new SmallListSet<>(MAX_VALUES);
    type = RType.NOTHING;
    isUnknown = false;
  }

  /** Creates an abstract value representing the given concrete value. */
  public AbstractRValue(RValue value, @Nullable Instr origin, int recursionLevel) {
    origins = new SmallListSet<>(MAX_VALUES);
    origins.add(new ValueOrigin(value, origin, recursionLevel));
    type = value.type();
    isUnknown = false;
  }

  /** Internal constructor for {@link #UNKNOWN}. */
  private AbstractRValue(Set<ValueOrigin> origins, RType type, boolean isUnknown) {
    this.origins = origins;
    this.type = type;
    this.isUnknown = isUnknown;
  }

  public @UnmodifiableView Set<ValueOrigin> origins() {
    return Collections.unmodifiableSet(origins);
  }

  public RType type() {
    return type;
  }

  public boolean isUnknown() {
    return isUnknown;
  }

  public boolean hasSingleOrigin() {
    return origins.size() == 1;
  }

  public @Nullable ValueOrigin singleOrigin() {
    return hasSingleOrigin() ? origins.iterator().next() : null;
  }

  public Maybe isUnboundValue() {
    if (isUnknown) {
      return Maybe.MAYBE;
    }
    Maybe result = null;
    for (var o : origins) {
      var update = o.value().equals(new Constant(SEXPs.UNBOUND_VALUE));
      result = Maybe.intersection(result, update);
    }
    return result == null ? Maybe.NO : result;
  }

  public void setToUnknown() {
    origins = Collections.emptySet();
    type = RType.ANY;
    isUnknown = true;
  }

  @Override
  public AbstractResult merge(AbstractRValue other) {
    if (isUnknown) {
      return AbstractResult.NONE;
    }
    if (type.isNothing()) {
      origins = other.origins;
      type = other.type;
      isUnknown = other.isUnknown;
      return AbstractResult.UPDATED;
    }
    if (other.isUnknown) {
      setToUnknown();
      return AbstractResult.LOST_PRECISION;
    }

    var changed = false;
    for (var origin : other.origins) {
      if (origins.add(origin)) {
        changed = true;
        if (origins.size() > MAX_VALUES) {
          setToUnknown();
          return AbstractResult.LOST_PRECISION;
        }
      }
    }

    if (changed) {
      type = type.union(other.type);
      return AbstractResult.UPDATED;
    } else {
      return AbstractResult.NONE;
    }
  }

  @Override
  public AbstractRValue clone() {
    // TODO
    throw new NotImplementedError();
  }

  // region serialization and deserialization
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
  // endregion serialization and deserialization
}
