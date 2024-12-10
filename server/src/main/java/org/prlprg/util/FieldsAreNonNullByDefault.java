package org.prlprg.util;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import javax.annotation.Nonnull;
import javax.annotation.meta.TypeQualifierDefault;

@SuppressWarnings("MissingJavadoc")
@Nonnull
@TypeQualifierDefault(ElementType.FIELD)
@Retention(RetentionPolicy.RUNTIME)
public @interface FieldsAreNonNullByDefault {}
