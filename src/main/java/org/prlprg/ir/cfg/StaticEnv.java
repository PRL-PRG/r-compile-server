package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableMap;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.sexp.SEXP;

/** Global static environment, e.g. {@code R_GlobalEnv}, {@code notClosed}. */
public sealed interface StaticEnv extends Env {
  StaticEnv GLOBAL = new StaticEnvImpl("R_GlobalEnv");
  StaticEnv NOT_CLOSED = new StaticEnvImpl("notClosed");
  StaticEnv ELIDED = new StaticEnvImpl("elided");

  /** All global static environments, associated to their name. */
  ImmutableMap<String, StaticEnv> ALL =
      Stream.of(StaticEnv.GLOBAL, StaticEnv.NOT_CLOSED, StaticEnv.ELIDED)
          .collect(ImmutableMap.toImmutableMap(StaticEnv::name, e -> e));

  /** Descriptive, uniquely identifying name of this environment. */
  String name();
}

final class StaticEnvImpl implements StaticEnv {
  private final String name;
  private final GlobalNodeId<StaticEnvImpl> id;

  public StaticEnvImpl(String name) {
    this.name = name;
    id = new GlobalNodeIdImpl<>(this);
  }

  @Override
  public String name() {
    return name;
  }

  @Nullable @Override
  public Env parent() {
    return null;
  }

  @Nullable @Override
  public SEXP sexp() {
    return null;
  }

  @Nullable @Override
  public CFG cfg() {
    return null;
  }

  @Nullable @Override
  public InstrOrPhi origin() {
    return null;
  }

  @Override
  public GlobalNodeId<? extends Env> id() {
    return id;
  }

  @Override
  public String toString() {
    return "{env:" + name + "}";
  }
}
