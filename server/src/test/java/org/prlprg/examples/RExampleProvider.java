package org.prlprg.examples;

import static org.prlprg.util.SingletonParameterResolver.resolveSingleton;

import java.util.stream.Stream;
import org.junit.jupiter.api.extension.ExtensionContext;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.ArgumentsProvider;
import org.junit.jupiter.params.support.AnnotationConsumer;
import org.junit.jupiter.params.support.ParameterDeclarations;

final class RExampleProvider
    implements ArgumentsProvider, AnnotationConsumer<RExampleTest> {
  private boolean accepted = false;
  private String option = "";
  private String skipOption = "";

  @Override
  public void accept(RExampleTest annotation) {
    accepted = true;
    option = annotation.option();
    skipOption = annotation.skipOption();
  }

  @Override
  public Stream<? extends Arguments> provideArguments(
      ParameterDeclarations parameters, ExtensionContext context) {
    assert accepted;
    return resolveSingleton(RExampleStore.class, context).examples().stream()
        .filter(example -> option.isEmpty() || example.hasOption("", option))
        .filter(example -> !example.hasOption("", skipOption))
        .map(Arguments::of);
  }
}
