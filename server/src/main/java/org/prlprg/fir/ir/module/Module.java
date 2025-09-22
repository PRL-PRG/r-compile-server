package org.prlprg.fir.ir.module;

import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;

import java.util.Collection;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.function.Supplier;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.CommentParser;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.observer.Observer;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.DeferredCallbacks;

public final class Module {
  // Observers
  private final Set<Observer> observers = new LinkedHashSet<>();

  // Data
  private final Map<String, Function> functions = new LinkedHashMap<>();

  public @UnmodifiableView Collection<Function> localFunctions() {
    return Collections.unmodifiableCollection(functions.values());
  }

  /// Lookup a function in this module or enclosing modules (the intrinsic and builtin modules).
  public @Nullable Function lookupFunction(String name) {
    var f = functions.get(name);
    if (f != null) {
      return f;
    }
    f = BUILTINS.localFunction(name);
    if (f != null) {
      return f;
    }
    return INTRINSICS.localFunction(name);
  }

  /// Lookup a function in this module.
  public @Nullable Function localFunction(String name) {
    return functions.get(name);
  }

  public Function addFunction(
      String name, List<NamedVariable> parameterNames, boolean baselineIsStub) {
    return addFunction(
        name, parameterNames, Function.computeBaselineParameters(parameterNames), baselineIsStub);
  }

  public Function addFunction(
      String name,
      List<NamedVariable> parameterNames,
      List<Parameter> baselineParameters,
      boolean baselineIsStub) {
    return this.record(
        "Module#addFunction",
        List.of(this, name),
        () -> {
          if (functions.containsKey(name)) {
            throw new IllegalArgumentException("Function with name '" + name + "' already exists.");
          }
          var function =
              new Function(this, name, parameterNames, baselineParameters, baselineIsStub);
          functions.put(name, function);
          return function;
        });
  }

  public void removeFunction(Function function) {
    this.record(
        "Module#removeFunction",
        List.of(this, function),
        () -> {
          if (!functions.remove(function.name(), function)) {
            throw new IllegalArgumentException("Function '" + function + "' does not exist.");
          }
        });
  }

  public void addObserver(Observer observer) {
    observers.add(observer);
  }

  public void removeObserver(Observer observer) {
    observers.remove(observer);
  }

  public <T> T record(String func, List<Object> args, Supplier<T> action) {
    for (var observer : observers) {
      observer.before(func, args);
    }
    T returnValue;
    try {
      returnValue = action.get();
    } catch (Exception e) {
      for (var observer : observers) {
        observer.after(func, args, null);
      }
      throw e;
    }
    for (var observer : observers) {
      observer.after(func, args, returnValue);
    }
    return returnValue;
  }

  public void record(String func, List<Object> args, Runnable action) {
    record(
        func,
        args,
        () -> {
          action.run();
          return null;
        });
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.printSeparated("\n", functions.values());
  }

  @ParseMethod
  private static Module parse(org.prlprg.parseprint.Parser p) {
    var s = p.scanner();
    var module = new Module();

    var postModule = new DeferredCallbacks<Module>();

    var p1 = p.withContext(new Function.ParseContext(module, postModule, p.context()));
    CommentParser.skipComments(s);
    while (!s.isAtEof() && !s.nextCharIs('}')) {
      var function = p1.parse(Function.class);
      if (module.functions.put(function.name(), function) != null) {
        throw new IllegalArgumentException(
            "Function with name '" + function.name() + "' already exists.");
      }
      CommentParser.skipComments(s);
    }

    postModule.run(module);

    return module;
  }
}
