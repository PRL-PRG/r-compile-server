package org.prlprg.examples;

import com.google.common.collect.ImmutableList;
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
import org.prlprg.util.Files;
import org.prlprg.util.TestPath;
import org.prlprg.util.Tests;

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


  /// If non-empty, overrides [#root()] and lists files from multiple roots.
  String[] roots() default {};

  /// If set, change [#root()] to be relative to this class instead of the test class.
  Class<?> rootClass() default Object.class;

  /// If `true`, append the class's name, minus `Test.java`, to the path.
  boolean appendClassName() default false;
}

class DirectoryArgumentsProvider implements ArgumentsProvider, AnnotationConsumer<DirectorySource> {
  private boolean accepted = false;
  private String glob = "";
  private int depth;
  private ImmutableList<Path> roots = ImmutableList.of();
  private Class<?> rootClass = Object.class;
  private boolean appendClassName;

  @Override
  public void accept(DirectorySource directorySource) {
    accepted = true;
    glob = directorySource.glob();
    roots = directorySource.roots().length == 0 ? ImmutableList.of(Paths.get(directorySource.root())) :

            Stream.of(directorySource.roots()).map(Paths::get).collect(ImmutableList.toImmutableList());
    rootClass = directorySource.rootClass();
    appendClassName = directorySource.appendClassName();
    depth = directorySource.depth();
  }

  @Override
  public Stream<? extends Arguments> provideArguments(ExtensionContext context) {
    assert accepted;

    var testClass = context.getRequiredTestClass();
    var rootClass = this.rootClass != Object.class ? this.rootClass : testClass;

    return roots.stream().flatMap(root -> {
      root = Tests.getResourcePath(rootClass, root);
      var root1 = !appendClassName ? root : root.resolve(Tests.testName(testClass));

      return Files.listDir(root1, glob, depth, false, true).stream()
          .map(path -> new TestPath(root1, path))
          .map(Arguments::of);
    });
  }
}
