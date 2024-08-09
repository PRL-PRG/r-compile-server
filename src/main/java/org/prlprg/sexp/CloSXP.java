package org.prlprg.sexp;

import java.util.Optional;
import java.util.function.Predicate;
import javax.annotation.Nonnull;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Streams;

/** Closure SEXP. */
public sealed interface CloSXP extends FunSXP {
  /** The closure's parameters: specifically, names and default values. */
  ListSXP parameters();

  /** If the body is a BCodeSXP, returns the AST which is stored in the first constant pool slot. */
  SEXP bodyAST();

  /** The closure body. */
  SEXP body();

  /** The environment where the closure was created. */
  EnvSXP env();

  @Override
  default SEXPType type() {
    return SEXPType.CLO;
  }

  @Override
  @Nonnull
  Attributes attributes();

  @Override
  CloSXP withAttributes(Attributes attributes);

  Optional<IntSXP> getSrcRef();

  /** Whether this has the dots parameter i.e. can take arbitrary names and arguments. */
  default boolean hasDots() {
    return parameters().names().contains("...");
  }

  /** The # of parameters the closure takes, or {@code INT_MAX} if it has the dots parameter. */
  default int numParameters() {
    return hasDots() ? Integer.MAX_VALUE : parameters().size();
  }

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return CloSXP.class;
  }
}

record CloSXPImpl(ListSXP parameters, SEXP body, EnvSXP env, @Override Attributes attributes)
    implements CloSXP {
  CloSXPImpl {
    if (Streams.hasDuplicates(parameters.names().stream().filter(Predicate.not(String::isEmpty)))) {
      throw new IllegalArgumentException("Parameters must have unique names");
    }
  }

  @Override
  public SEXP bodyAST() {
    if (body instanceof BCodeSXP bc) {
      return bc.bc().consts().getFirst();
    } else {
      return body;
    }
  }

  @Override
  public CloSXP withAttributes(Attributes attributes) {
    return SEXPs.closure(parameters, body, env, attributes);
  }

  @Override
  public Optional<IntSXP> getSrcRef() {
    return Optional.ofNullable((IntSXP) attributes.get("srcref"));
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
