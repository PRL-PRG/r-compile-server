package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableMap;
import java.util.stream.Stream;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.sexp.EnvSXP;

/** Unknown or global static environment. */
public sealed interface StaticEnv extends GlobalNode<EnvSXP> {
  StaticEnv GLOBAL = new StaticEnvImpl("global");
  StaticEnv BASE = new StaticEnvImpl("base");
  StaticEnv UNKNOWN = new StaticEnvImpl("");

  @ParseMethod
  private static StaticEnv parse(Parser p) {
    var s = p.scanner();

    if (!s.nextCharSatisfies(Character::isJavaIdentifierStart)) {
      return UNKNOWN;
    }

    var name = s.readJavaIdentifierOrKeyword();
    var result = StaticEnvImpl.ALL.get(name);
    if (result == null) {
      throw s.fail("Unknown static environment: " + name);
    }
    return result;
  }
}

final class StaticEnvImpl implements StaticEnv {
  /** All global static environments, associated to their name. */
  static final ImmutableMap<String, StaticEnv> ALL =
      Stream.of(GLOBAL, BASE, UNKNOWN)
          .collect(ImmutableMap.toImmutableMap(e -> e.toString().substring(1), e -> e));

  private final GlobalNodeId<EnvSXP> id;
  private final String toString;

  public StaticEnvImpl(String name) {
    id = new GlobalNodeIdImpl<>(this);
    toString = '?' + name;
  }

  @Override
  public Class<EnvSXP> type() {
    return EnvSXP.class;
  }

  @Override
  public GlobalNodeId<EnvSXP> id() {
    return id;
  }

  @Override
  public String toString() {
    return toString;
  }
}
