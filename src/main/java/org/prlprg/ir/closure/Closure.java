package org.prlprg.ir.closure;

import com.google.common.collect.ImmutableList;
import java.util.EnumSet;
import java.util.HashSet;
import java.util.Optional;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.SymSXP;

/** A closure. */
public class Closure {
  private final @Nullable CloSXP origin = null;
  private final @IsEnv RValue env = StaticEnv.NOT_CLOSED;
  private final SEXP ast;
  private final String name;
  private final Parameters parameters;

  /** Closure versions. */
  private final Set<ClosureVersion> versions = new HashSet<>();

  /** Optimizations guaranteed for all of this closure's versions, otherwise we won't compile it. */
  ClosureVersion.OptimizationContext userContext;

  public Closure(SEXP ast, String name, Parameters parameters) {
    // TODO: Change constructor
    this.ast = ast;
    this.name = name;
    this.parameters = parameters;
  }

  public ClosureVersion declareVersion(
      boolean isBaseline, ClosureVersion.OptimizationContext context, @Nullable BCodeSXP ignored) {
    // TODO: currently a stub like the above constructor, need to actually compile `ignored` and
    //  get properties and CFG (`ignored` also can't be null but this is a stub). Or maybe do
    //  something other than Ř.
    var version =
        new ClosureVersion(
            this,
            isBaseline,
            context,
            new ClosureVersion.Properties(
                EnumSet.noneOf(ClosureVersion.Property.class), ImmutableList.of()),
            new CFG(),
            ImmutableList.of());
    // Actually replaces if there's an existing version, if we do it the same as Ř.
    versions.add(version);
    return version;
  }

  /** {@link CloSXP} of the closure. */
  public @Nullable CloSXP origin() {
    return origin;
  }

  /** Envirioment of the closure. */
  public @IsEnv RValue env() {
    return env;
  }

  /** Closure's AST. */
  public SEXP ast() {
    return ast;
  }

  /** Descriptive name of the closure inferred e.g. from the variable it's assigned to. */
  public String name() {
    return name;
  }

  /**
   * Closure parameters (<a
   * href="https://en.wikipedia.org/wiki/Parameter_(computer_programming)#:~:text=parameter,argument">"formal
   * arguments"</a>).
   */
  public Parameters formals() {
    return parameters;
  }

  /** Number of {@link #formals()}. */
  public int numArgs() {
    return parameters.numArgs();
  }

  /**
   * Closure parameters (<a
   * href="https://en.wikipedia.org/wiki/Parameter_(computer_programming)#:~:text=parameter,argument">"formal
   * arguments"</a>).
   */
  public record Parameters(ListSXP ast, ImmutableList<Parameter> parameters) {
    public Parameters {
      if (parameters.stream().filter(Parameter::isDots).count() > 1) {
        throw new IllegalArgumentException("Multiple dots parameters");
      }
    }

    public int numArgs() {
      return parameters.size();
    }

    public Iterable<Optional<SymSXP>> names() {
      return parameters.stream().map(Parameter::name).map(Optional::ofNullable)::iterator;
    }

    public Iterable<Optional<SEXP>> defaultArgs() {
      return parameters.stream().map(Parameter::defaultValue).map(Optional::ofNullable)::iterator;
    }

    public boolean hasDefaultArgs() {
      return parameters.stream().anyMatch(Parameter::hasDefaultValue);
    }

    public boolean hasDotsArg() {
      return parameters.stream().anyMatch(Parameter::isDots);
    }
  }

  public record Parameter(@Nullable SymSXP name, SEXP defaultValue) {
    public Parameter(@Nullable SymSXP name) {
      this(name, SEXPs.MISSING_ARG);
    }

    public boolean hasDefaultValue() {
      return defaultValue != SEXPs.MISSING_ARG;
    }

    public boolean isDots() {
      return name == SEXPs.DOTS_SYMBOL;
    }
  }
}
