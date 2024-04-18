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
 * <p>To find the {@code PrintMethod} for that class, {@link Printer} looks within the object class
 * itself and superclasses as well as context class (but <i>not</i> context superclasses). You
 * cannot put it anywhere else (orphan rule). The method's arguments must be (in order) the object
 * to be printed (the object must be <b>before</b> {@link Printer}), {@link Printer}, and optionally
 * something else (context) (the context must be <b>after</b> {@link Printer}. The object or context
 * may be the instance receiver, otherwise the method must be static (this is unambiguous because if
 * the context is the receiver, the object will be an argument provided before the {@link Printer}.
 * The method must be {@code void}. It can't throw any checked exceptions, and it must be private
 * (since using {@link Printer#print(Object)} is preferred).
 *
 * @see ParseMethod
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.METHOD)
public @interface PrintMethod {}
