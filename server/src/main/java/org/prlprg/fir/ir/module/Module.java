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
import org.prlprg.fir.ir.observer.Observer;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.parseprint.IrPrintContext;
import org.prlprg.fir.parseprint.ModuleParseContext;
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
      List<FunctionParameter> baselineParameters,
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

  /// Add an already-constructed function, e.g. one that was just parsed.
  ///
  /// @throws IllegalArgumentException If the function isn't owned by this module, or this module
  ///   already has a function with its name.
  public void addFunction(Function function) {
    this.record(
        "Module#addFunction",
        List.of(this, function),
        () -> {
          if (function.owner() != this) {
            throw new IllegalArgumentException(
                "Function '" + function.name() + "' belongs to a different module.");
          }
          if (functions.containsKey(function.name())) {
            throw new IllegalArgumentException(
                "Function with name '" + function.name() + "' already exists.");
          }
          functions.put(function.name(), function);
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

  /// A module can be printed without any surrounding information, so this forwards to
  /// [IrPrintContext] and callers can just `p.print(module)`.
  @PrintMethod
  private void print(Printer p) {
    p.withContext(new IrPrintContext()).print(this);
  }

  /// A module can be parsed without any surrounding information, so this forwards to
  /// [ModuleParseContext] and callers can just `p.parse(Module.class)`.
  @ParseMethod
  private static Module parse(Parser p) {
    return p.withContext(new ModuleParseContext()).parse(Module.class);
  }
}
