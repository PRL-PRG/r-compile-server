package org.prlprg.examples;

import static org.prlprg.bc2fir.BC2FirCompilerUtils.compile;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import com.google.common.collect.ImmutableSet;
import java.util.Set;
import javax.annotation.Nullable;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.gnur.GNUR;

/// An R or FIR source file
public class FirExample {
  private final GNUR R;
  private final Example inner;
  private final @Nullable RExample fromR;

  private @Nullable Module module;

  public static FirExample fromR(GNUR R, RExample inner) {
    return new FirExample(R, inner.inner, inner);
  }

  public static FirExample fromFir(GNUR R, Example inner) {
    return new FirExample(R, inner, null);
  }

  private FirExample(GNUR r, Example inner, @Nullable RExample fromR) {
    this.R = r;
    this.inner = inner;
    this.fromR = fromR;
  }

  public String name() {
    return inner.name();
  }

  public @Unmodifiable Set<ExampleOption> options(String filter) {
    return inner.options(filter);
  }

  public Module module() {
    if (module == null) {
      if (fromR != null) {
        module = compile(fromR.compiledClosures(), R.getSession());
      } else {
        module = parseModule(inner.text());
      }
    }
    return module;
  }

  @Override
  public String toString() {
    return inner.toString();
  }
}
