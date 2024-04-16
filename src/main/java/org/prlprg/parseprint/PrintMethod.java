package org.prlprg.parseprint;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/**
 * Annotation to put on a method that takes a {@link Printer} and object and uses the printer to
 * print the object. The method may be static and only take a printer, in which case it prints
 * {@code this}, or non-static and take a printer and an object to print.
 *
 * <p>{@link Printer} uses <a href="https://github.com/classgraph/classgraph">ClassGraph</a> to
 * register printers for all classes with such a method. The type which is printed is inferred to be
 * the method's return type. The method must only take a {@link Printer} as an argument and throw no
 * checked exceptions. The method must also be private, since it's already exposed through {@link
 * Printer#print(Object)}.
 *
 * <p>Specifically, this scans classes in {@link org.prlprg}.
 *
 * @see ParseMethod
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.METHOD)
public @interface PrintMethod {}
