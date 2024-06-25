package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableMap;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.sexp.SEXPType;

/** Global static environment, e.g. {@code R_GlobalEnv}, {@code notClosed}. */
public sealed interface StaticEnv extends RValue, GlobalNode {
  StaticEnv GLOBAL = new StaticEnvImpl("R_GlobalEnv");
  StaticEnv BASE = new StaticEnvImpl("R_BaseEnv");
  StaticEnv NOT_CLOSED = new StaticEnvImpl("notClosed");
  StaticEnv ELIDED = new StaticEnvImpl("elided");

  /** All global static environments, associated to their name. */
  ImmutableMap<String, StaticEnv> ALL =
      Stream.of(GLOBAL, BASE, NOT_CLOSED, ELIDED)
          .collect(ImmutableMap.toImmutableMap(StaticEnv::name, e -> e));

  /** Descriptive, uniquely identifying name of this environment. */
  String name();

  @Override
  GlobalNodeId<? extends StaticEnv> id();
}

final class StaticEnvImpl implements StaticEnv {
  private final String name;
  private final GlobalNodeId<StaticEnvImpl> id;
  private final EnvAux envAux;

  public StaticEnvImpl(String name) {
    this.name = name;
    id = new GlobalNodeIdImpl<>(this);
    envAux = new EnvAux(null);
  }

  @Override
  public String name() {
    return name;
  }

  @Override
  public RType type() {
    return RTypes.simple(SEXPType.ENV);
  }

  @Override
  public EnvAux envAux() {
    return envAux;
  }

  @Nullable @Override
  public InstrOrPhi origin() {
    return null;
  }

  @Override
  public GlobalNodeId<? extends StaticEnv> id() {
    return id;
  }

  @Override
  public String toString() {
    return name;
  }
}
