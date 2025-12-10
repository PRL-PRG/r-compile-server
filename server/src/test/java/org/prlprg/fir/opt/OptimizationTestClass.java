package org.prlprg.fir.opt;

import static org.prlprg.fir.opt.Optimizations.defaultOptimizations;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import java.util.Arrays;
import java.util.stream.Stream;
import org.junit.jupiter.api.extension.ExtensionContext;
import org.junit.jupiter.params.ParameterizedClass;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.ArgumentsProvider;
import org.junit.jupiter.params.provider.ArgumentsSource;
import org.junit.jupiter.params.support.ParameterDeclarations;
import org.prlprg.fir.opt.specialize.DefiniteForce;
import org.prlprg.fir.opt.specialize.OptimizeCallee;
import org.prlprg.fir.opt.specialize.ResolveDynamicCallee;
import org.prlprg.fir.opt.specialize.ResolveLoad;
import org.prlprg.fir.opt.specialize.ResolveLoadFun;
import org.prlprg.fir.opt.specialize.ReturnTypeAndEffects;

/// Record or class that takes one parameter, an [Optimization], and is instantiated with
/// various optimizations.
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target({ElementType.ANNOTATION_TYPE, ElementType.TYPE})
@ParameterizedClass
@ArgumentsSource(OptimizationProvider.class)
public @interface OptimizationTestClass {}

final class OptimizationProvider implements ArgumentsProvider {
  @Override
  public Stream<? extends Arguments> provideArguments(
      ParameterDeclarations parameters, ExtensionContext context) {
    return Arrays.stream(OPTIMIZATIONS).map(Arguments::of);
  }

  private static final Optimization[] OPTIMIZATIONS =
      new Optimization[] {
        new Cleanup(true),
        new Cleanup(false),
        defaultOptimizations(),
        new Specialize(new DefiniteForce()),
        new Specialize(new OptimizeCallee(1)),
        new Specialize(new ReturnTypeAndEffects()),
        new Sequence(
            "optimizeOrigins",
            new Specialize(
                "resolve", new ResolveLoad(), new ResolveLoadFun(), new ResolveDynamicCallee()),
            new Inline(10000),
            new Cleanup(true)),
        new SpeculateAssume(1, true),
        new SpeculateDispatch(1, 9, 99)
      };
}
