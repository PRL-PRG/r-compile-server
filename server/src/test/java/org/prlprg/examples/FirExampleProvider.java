package org.prlprg.examples;

import static org.prlprg.util.SingletonParameterResolver.resolveSingleton;

import java.util.stream.Stream;
import org.jetbrains.annotations.NotNull;
import org.junit.jupiter.api.extension.ExtensionContext;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.ArgumentsProvider;
import org.junit.jupiter.params.support.AnnotationConsumer;
import org.junit.jupiter.params.support.ParameterDeclarations;

final class FirExampleProvider
    implements ArgumentsProvider, AnnotationConsumer<@NotNull FirExampleTest> {
  private boolean accepted = false;
  private String option = "";
  private boolean includeFromR = true;

  @Override
  public void accept(FirExampleTest annotation) {
    accepted = true;
    option = annotation.option();
    includeFromR = annotation.includeFromR();
  }

  @Override
  public Stream<? extends Arguments> provideArguments(
      ParameterDeclarations parameters, ExtensionContext context) {
    assert accepted;
    return resolveSingleton(FirExampleStore.class, context).examples().stream()
        .filter(example -> option.isEmpty() || example.hasOption("", option))
        .filter(example -> includeFromR || !example.type().equals("R"))
        .map(Arguments::of);
  }
}
