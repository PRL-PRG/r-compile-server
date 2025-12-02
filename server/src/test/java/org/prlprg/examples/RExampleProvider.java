package org.prlprg.examples;

import static org.prlprg.util.SingletonParameterResolver.resolveSingleton;

import java.util.stream.Stream;
import org.jetbrains.annotations.NotNull;
import org.junit.jupiter.api.extension.ExtensionContext;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.ArgumentsProvider;
import org.junit.jupiter.params.support.AnnotationConsumer;
import org.junit.jupiter.params.support.ParameterDeclarations;
import org.prlprg.util.SingletonParameterResolver;

class RExampleProvider implements ArgumentsProvider, AnnotationConsumer<@NotNull RExampleSource> {
  private boolean accepted = false;

  @Override
  public void accept(RExampleSource annotation) {
    accepted = true;
  }

  @Override
  public Stream<? extends Arguments> provideArguments(ParameterDeclarations parameters,
      ExtensionContext context) {
    assert accepted;
    return resolveSingleton(RExampleStore.class, context).examples().stream().map(Arguments::of);
  }
}
