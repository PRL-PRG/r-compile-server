package org.prlprg.gen2c;

import com.google.common.collect.ImmutableMap;
import java.util.Map.Entry;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.util.Streams;

public record CompiledModule(String cCode, ImmutableMap<String, CompiledClosure> bindings) {
  public static ImmutableMap<String, CompiledClosure> bindingsFromSexp(EnvSXP sexp) {
    return sexp.bindings().stream()
        .collect(
            Streams.toImmutableMap(Entry::getKey, e -> CompiledClosure.fromSexp(e.getValue())));
  }

  public EnvSXP bindingsAsSexp() {
    var bindingsEnv = new UserEnvSXP();
    for (var entry : bindings.entrySet()) {
      bindingsEnv.set(entry.getKey(), entry.getValue().asSexp());
    }
    return bindingsEnv;
  }
}
