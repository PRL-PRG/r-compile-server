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
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.observer.Observer;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public final class Module {
  // Observers
  private final Set<Observer> observers = new LinkedHashSet<>();

  // Data
  private final Map<NamedVariable, Function> functions = new LinkedHashMap<>();

  public @UnmodifiableView Collection<Function> localFunctions() {
    return Collections.unmodifiableCollection(functions.values());
  }

  /// Lookup a function in this module or enclosing modules (the builtin and intrinsic modules).
  public @Nullable Function lookupFunction(NamedVariable name) {
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

  /// Lookup a function in this module (but not enclosing ones).
  public @Nullable Function localFunction(NamedVariable name) {
    return functions.get(name);
  }

  public Function addFunction(
      NamedVariable name, List<NamedVariable> parameterNames, boolean baselineIsStub) {
    return addFunction(
        name, parameterNames, Function.computeBaselineParameters(parameterNames), baselineIsStub);
  }

  public Function addFunction(
      NamedVariable name,
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

  /// Run all observers associated with the given function and arguments, before and after
  /// `action`
  ///
  /// All mutating IR operations (except deferred initialization) must be wrapped in
  /// `module.record`
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
          return 0;
        });
  }

  public Module deepCopy() {
    return Parser.fromString(toString(), Module.class);
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

    var deferredFunctions = new LinkedHashMap<NamedVariable, FunctionRef>();
    var p1 =
        p.withContext(
            new Function.ParseContext(
                module, new FunctionRef.ParseContext(deferredFunctions), p.context()));

    while (!s.isAtEof() && !s.nextCharIs('}')) {
      var function = p1.parse(Function.class);
      if (module.functions.put(function.name(), function) != null) {
        throw new IllegalArgumentException(
            "Function with name '" + function.name() + "' already exists.");
      }
    }

    for (var entry : deferredFunctions.entrySet()) {
      var name = entry.getKey();
      var deferred = entry.getValue();
      var function = module.lookupFunction(name);
      if (function == null) {
        throw s.fail("Function not found: " + name);
      }
      deferred.set(function);
    }

    return module;
  }
}
