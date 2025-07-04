package org.prlprg.fir.observer;

import com.google.common.collect.ImmutableList;

public record CFGEdit(String func, ImmutableList<Object> args) {}
