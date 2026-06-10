package org.prlprg.util;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.stream.Stream;
import org.junit.jupiter.api.extension.ExtensionContext;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.ArgumentsProvider;
import org.junit.jupiter.params.provider.ArgumentsSource;
import org.junit.jupiter.params.support.AnnotationConsumer;

/// List all files in a directory and provide each one's path as an argument.
@Documented
@Target(ElementType.METHOD)
@Retention(RetentionPolicy.RUNTIME)
@ArgumentsSource(DirectoryArgumentsProvider.class)
public @interface DirectorySource {
  /// Filter files by glob applied to the filename. Default is to not filter.
  String glob() default "";

  /// Specify a number > 1 to include files in subdirectories. Specify INT_MAX to recurse
  /// infinitely. Defaults to 1.
  int depth() default 1;

  /// Directory to list files from, relative to the test class (or [#rootClass()]). Default is `.`.
  ///
  /// "Relative to class A", means take the subpath of class A relative to `.../test/java`, and
  /// append it to `.../test/resources`.
  String root() default ".";

  /// If set, change [#root()] to be relative to this class instead of the test class.
  Class<?> rootClass() default Object.class;

  /// If `true`, append the class's name, minus `Test.java`, to the path.
  boolean appendClassName() default false;
}

class DirectoryArgumentsProvider implements ArgumentsProvider, AnnotationConsumer<DirectorySource> {
  private boolean accepted = false;
  private String glob = "";
  private int depth;
  private Path root = Paths.get("");
  private Class<?> rootClass = Object.class;
  private boolean appendClassName;

  @Override
  public void accept(DirectorySource directorySource) {
    accepted = true;
    glob = directorySource.glob();
    root = Paths.get(directorySource.root());
    rootClass = directorySource.rootClass();
    appendClassName = directorySource.appendClassName();
    depth = directorySource.depth();
  }

  @Override
  public Stream<? extends Arguments> provideArguments(ExtensionContext context) {
    assert accepted;

    var testClass = context.getRequiredTestClass();
    var rootClass = this.rootClass != Object.class ? this.rootClass : testClass;
    var root1 = Tests.getResourcePath(rootClass, root);
    var root2 = !appendClassName ? root1 : root1.resolve(Tests.testName(testClass));

    return Files.listDir(root2, glob, depth, false, true).stream()
        .map(path -> new TestPath(root2, path))
        .map(Arguments::of);
  }
}
