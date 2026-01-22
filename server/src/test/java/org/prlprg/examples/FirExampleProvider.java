package org.prlprg.examples;

import static org.prlprg.util.SingletonParameterResolver.resolveSingleton;

import java.util.stream.Stream;
import org.junit.jupiter.api.extension.ExtensionContext;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.ArgumentsProvider;
import org.junit.jupiter.params.support.AnnotationConsumer;
import org.junit.jupiter.params.support.ParameterDeclarations;

final class FirExampleProvider implements ArgumentsProvider, AnnotationConsumer<FirExampleTest> {
  private boolean accepted = false;
  private String option = "";
  private String skipOption = "";
  private boolean includeFromR = true;

  @Override
  public void accept(FirExampleTest annotation) {
    accepted = true;
    option = annotation.option();
    skipOption = annotation.skipOption();
    includeFromR = annotation.includeFromR();
  }

  @Override
  public Stream<? extends Arguments> provideArguments(
      ParameterDeclarations parameters, ExtensionContext context) {
    assert accepted;
    return resolveSingleton(FirExampleStore.class, context).examples().stream()
        .filter(example -> option.isEmpty() || example.hasOption("", option))
        .filter(example -> !example.hasOption("", skipOption))
        .filter(example -> includeFromR || !example.type().equals("R"))
        .map(Arguments::of);
  }
}
