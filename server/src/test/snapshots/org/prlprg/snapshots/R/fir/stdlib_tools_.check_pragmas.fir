fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.check_pragmas` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg character:cls, reg r:V, reg setwd:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg on_exit:cls, reg r5:V, reg dir3:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg c1:cls, reg r13:V, reg paste0:cls, reg paste1:cls, reg nonport:*, reg nonport1:V, reg p2:p(V +), reg r15:V, reg p3:p(V +), reg r17:V, reg ff:*, reg ff1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg i7:I, reg r19:V, reg grepl:cls, reg pat:*, reg pat1:V, reg p4:p(V +), reg readLines:cls, reg f:*, reg f1:V, reg p5:p(V +), reg r22:V, reg p6:p(V +), reg r24:V, reg any:cls, reg r25:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg i12:I, reg r27:V, reg found:*, reg found1:V, reg f2:*, reg f3:V, reg c4:cls, reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg i16:I, reg r31:V, reg grepl1:cls, reg pat2:*, reg pat3:V, reg p7:p(V +), reg readLines1:cls, reg f4:*, reg f5:V, reg p8:p(V +), reg r34:V, reg p9:p(V +), reg r36:V, reg any1:cls, reg r37:V, reg c5:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg i21:I, reg r39:V, reg warn:*, reg warn1:V, reg f6:*, reg f7:V, reg c6:cls, reg r40:V, reg i22:I, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg i25:I, reg r43:V, reg grepl2:cls, reg pat4:*, reg pat5:V, reg p10:p(V +), reg readLines2:cls, reg f8:*, reg f9:V, reg p11:p(V +), reg r46:V, reg p12:p(V +), reg r48:V, reg any2:cls, reg r49:V, reg c7:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r50:V, reg i30:I, reg r51:V, reg port:*, reg port1:V, reg f10:*, reg f11:V, reg c8:cls, reg r52:V, reg i31:I, reg structure:cls, reg found2:*, reg found3:V, reg p13:p(V +), reg warn2:*, reg warn3:V, reg p14:p(V +), reg port2:*, reg port3:V, reg p15:p(V +), reg r57:V |
    mkenv;
    st dir = dir;
    character = ldf character;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    r = dyn character();
    check L17() else D1();
  D1():
    deopt 2 [r];
  L17():
    st port = r;
    st warn = r;
    st found = r;
    setwd = ldf setwd;
    check L18() else D2();
  D2():
    deopt 7 [];
  L18():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r2 = dyn setwd(p);
    check L19() else D3();
  D3():
    deopt 9 [r2];
  L19():
    st od = r2;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L0():
    dir3 = ldf dir;
    check L22() else D4();
  L20():
    on_exit = ldf `on.exit` in base;
    r5 = dyn on_exit(<lang setwd(od)>);
    goto L0();
  L21():
    r3 = dyn base(<lang setwd(od)>);
    goto L0();
  D4():
    deopt 15 [];
  L22():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c = ldf c in base;
      r8 = dyn c("src", "inst/include");
      goto L0(r8);
    L2():
      r6 = dyn base1("src", "inst/include");
      goto L0(r6);
    };
    r10 = dyn dir3[, pattern, `full.names`, recursive](p1, "[.](c|cc|cpp|h|hh|hpp)$", TRUE, TRUE);
    check L23() else D5();
  D5():
    deopt 23 [r10];
  L23():
    st ff = r10;
    st pat = "^\\s*#pragma (GCC|clang) diagnostic ignored";
    st pat2 = "^\\s*#pragma (GCC|clang) diagnostic ignored[^-]*[-]W(uninitialized|float-equal|array-bound|format)";
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L1(r12):
    st nonport = r12;
    paste0 = ldf paste0;
    check L27() else D7();
  L24():
    c1 = ldf c in base;
    r13 = dyn c1("abi-tag", "aggressive-loop-optimizations", "aliasing", "align-commons", "aligned-new", "alloc-size-larger-than", "alloc-zero", "alloca", "alloca-larger-than", "ampersand", "argument-mismatch", "array-temporaries", "assign-intercept", "attribute-alias", "bool-compare", "bool-operation", "builtin-declaration-mismatch", "c-binding-type", "c90-c99-compat", "c99-c11-compat", "cast-function-type", "catch-value", "character-truncation", "chkp", "class-memaccess", "clobbered", "compare-reals", "conditionally-supported", "conversion-extra", "coverage-mismatch", "designated-init", "discarded-array-qualifiers", "discarded-qualifiers", "do-subscript", "duplicated-branches", "duplicated-cond", "format-contains-nul", "format-overflow", "format-signedness", "format-truncation", "frame-address", "frame-larger-than", "free-nonheap-object", "function-elimination", "hsa", "if-not-aligned", "implicit-interface", "implicit-procedure", "inherited-variadic-ctor", "int-in-bool-context", "integer-division", "intrinsic-shadow", "intrinsics-std", "invalid-memory-model", "jump-misses-init", "larger-than", "line-truncation", "literal-suffix", "logical-op", "lto-type-mismatch", "maybe-uninitialized", "memset-elt-size", "misleading-indentation", "missing-attributes", "missing-parameter-type", "multiple-inheritance", "multistatement-macros", "namespaces", "noexcept", "non-template-friend", "nonnull-compare", "normalized", "old-style-declaration", "openmp-simd", "override-init", "override-init-side-effects", "packed-bitfield-compat", "packed-not-aligned", "placement-new", "pmf-conversions", "pointer-compare", "property-assign-default", "psabi", "real-q-constant", "realloc-lhs", "realloc-lhs-all", "restrict", "return-local-addr", "scalar-storage-order", "shadow-compatible-local", "shadow-local", "sized-deallocation", "sizeof-pointer-div", "stack-usage", "strict-null-sentinel", "stringop-overflow", "stringop-truncation", "subobject-linkage", "suggest-attribute", "suggest-final-methods", "suggest-final-types", "suggest-override", "surprising", "switch-unreachable", "sync-nand", "tabs", "target-lifetime", "templates", "terminate", "traditional", "traditional-conversion", "trampolines", "undefined-do-loop", "underflow", "unsafe-loop-optimizations", "unsuffixed-float-constants", "unused-but-set-parameter", "unused-but-set-variable", "unused-dummy-argument", "use-without-only", "useless-cast", "vector-operation-performance", "virtual-inheritance", "virtual-move-assign", "vla-larger-than", "zerotrip");
    check L26() else D6();
  L25():
    r11 = dyn base2("abi-tag", "aggressive-loop-optimizations", "aliasing", "align-commons", "aligned-new", "alloc-size-larger-than", "alloc-zero", "alloca", "alloca-larger-than", "ampersand", "argument-mismatch", "array-temporaries", "assign-intercept", "attribute-alias", "bool-compare", "bool-operation", "builtin-declaration-mismatch", "c-binding-type", "c90-c99-compat", "c99-c11-compat", "cast-function-type", "catch-value", "character-truncation", "chkp", "class-memaccess", "clobbered", "compare-reals", "conditionally-supported", "conversion-extra", "coverage-mismatch", "designated-init", "discarded-array-qualifiers", "discarded-qualifiers", "do-subscript", "duplicated-branches", "duplicated-cond", "format-contains-nul", "format-overflow", "format-signedness", "format-truncation", "frame-address", "frame-larger-than", "free-nonheap-object", "function-elimination", "hsa", "if-not-aligned", "implicit-interface", "implicit-procedure", "inherited-variadic-ctor", "int-in-bool-context", "integer-division", "intrinsic-shadow", "intrinsics-std", "invalid-memory-model", "jump-misses-init", "larger-than", "line-truncation", "literal-suffix", "logical-op", "lto-type-mismatch", "maybe-uninitialized", "memset-elt-size", "misleading-indentation", "missing-attributes", "missing-parameter-type", "multiple-inheritance", "multistatement-macros", "namespaces", "noexcept", "non-template-friend", "nonnull-compare", "normalized", "old-style-declaration", "openmp-simd", "override-init", "override-init-side-effects", "packed-bitfield-compat", "packed-not-aligned", "placement-new", "pmf-conversions", "pointer-compare", "property-assign-default", "psabi", "real-q-constant", "realloc-lhs", "realloc-lhs-all", "restrict", "return-local-addr", "scalar-storage-order", "shadow-compatible-local", "shadow-local", "sized-deallocation", "sizeof-pointer-div", "stack-usage", "strict-null-sentinel", "stringop-overflow", "stringop-truncation", "subobject-linkage", "suggest-attribute", "suggest-final-methods", "suggest-final-types", "suggest-override", "surprising", "switch-unreachable", "sync-nand", "tabs", "target-lifetime", "templates", "terminate", "traditional", "traditional-conversion", "trampolines", "undefined-do-loop", "underflow", "unsafe-loop-optimizations", "unsuffixed-float-constants", "unused-but-set-parameter", "unused-but-set-variable", "unused-dummy-argument", "use-without-only", "useless-cast", "vector-operation-performance", "virtual-inheritance", "virtual-move-assign", "vla-larger-than", "zerotrip");
    goto L1(r11);
  D6():
    deopt 160 [r13];
  D7():
    deopt 163 [];
  L26():
    goto L1(r13);
  L27():
    p3 = prom<V +>{
      paste1 = ldf paste;
      p2 = prom<V +>{
        nonport = ld nonport;
        nonport1 = force? nonport;
        checkMissing(nonport1);
        return nonport1;
      };
      r15 = dyn paste1[, collapse](p2, "|");
      return r15;
    };
    r17 = dyn paste0("^\\s*#pragma (GCC|clang) diagnostic[^-]*[-]W(", p3, ")");
    check L28() else D8();
  D8():
    deopt 167 [r17];
  L28():
    st pat3 = r17;
    ff = ld ff;
    check L29() else D9();
  D9():
    deopt 169 [ff];
  L29():
    ff1 = force? ff;
    checkMissing(ff1);
    s = toForSeq(ff1);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L30() else L15();
  L15():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L30():
    structure = ldf structure;
    check L68() else D28();
  D28():
    deopt 247 [];
  L3(i7, r19):
    c3 = `as.logical`(r19);
    if c3 then L36() else L4();
  L31():
    grepl = ldf grepl;
    check L33() else D10();
  L32():
    r18 = dyn base3(<lang grepl(pat, readLines(f, warn=FALSE), perl=TRUE, useBytes=TRUE)>);
    goto L3(i2, r18);
  L68():
    p13 = prom<V +>{
      found2 = ld found;
      found3 = force? found2;
      checkMissing(found3);
      return found3;
    };
    p14 = prom<V +>{
      warn2 = ld warn;
      warn3 = force? warn2;
      checkMissing(warn3);
      return warn3;
    };
    p15 = prom<V +>{
      port2 = ld port;
      port3 = force? port2;
      checkMissing(port3);
      return port3;
    };
    r57 = dyn structure[, class, warn, port](p13, "check_pragmas", p14, p15);
    check L69() else D29();
  D10():
    deopt 174 [i2];
  D29():
    deopt 255 [r57];
  L4():
    goto L2(i7);
  L33():
    p4 = prom<V +>{
      pat = ld pat;
      pat1 = force? pat;
      checkMissing(pat1);
      return pat1;
    };
    p6 = prom<V +>{
      readLines = ldf readLines;
      p5 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      r22 = dyn readLines[, warn](p5, FALSE);
      return r22;
    };
    r24 = dyn grepl[, , perl, useBytes](p4, p6, TRUE, TRUE);
    check L34() else D11();
  L36():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L69():
    popenv;
    return r57;
  D11():
    deopt 181 [i2, r24];
  L5(i12, r27):
    st found = r27;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L44() else L45();
  L34():
    any = ldf any in base;
    r25 = dyn any(r24);
    check L35() else D12();
  L37():
    found = ld found;
    check L39() else D13();
  L38():
    r26 = dyn base4(<sym found>, <sym f>);
    goto L5(i7, r26);
  D12():
    deopt 183 [i2, r25];
  D13():
    deopt 186 [i7, found];
  L7(i16, r31):
    c5 = `as.logical`(r31);
    if c5 then L49() else L8();
  L35():
    goto L3(i2, r25);
  L39():
    found1 = force? found;
    checkMissing(found1);
    f2 = ld f;
    check L40() else D14();
  L44():
    grepl1 = ldf grepl;
    check L46() else D16();
  L45():
    r30 = dyn base5(<lang grepl(pat2, readLines(f, warn=FALSE), perl=TRUE, useBytes=TRUE)>);
    goto L7(i12, r30);
  D14():
    deopt 188 [i7, f2];
  D16():
    deopt 198 [i12];
  L8():
    goto L10(i16);
  L10(i22):
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L56() else L57();
  L40():
    f3 = force? f2;
    checkMissing(f3);
    c4 = ldf c in base;
    r28 = dyn c4(found1, f3);
    check L41() else D15();
  L46():
    p7 = prom<V +>{
      pat2 = ld pat2;
      pat3 = force? pat2;
      checkMissing(pat3);
      return pat3;
    };
    p9 = prom<V +>{
      readLines1 = ldf readLines;
      p8 = prom<V +>{
        f4 = ld f;
        f5 = force? f4;
        checkMissing(f5);
        return f5;
      };
      r34 = dyn readLines1[, warn](p8, FALSE);
      return r34;
    };
    r36 = dyn grepl1[, , perl, useBytes](p7, p9, TRUE, TRUE);
    check L47() else D17();
  L49():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L50() else L51();
  D15():
    deopt 191 [i7, r28];
  D17():
    deopt 205 [i12, r36];
  L9(i21, r39):
    st warn = r39;
    goto L10(i21);
  L11(i25, r43):
    c7 = `as.logical`(r43);
    if c7 then L61() else L12();
  L41():
    goto L5(i7, r28);
  L47():
    any1 = ldf any in base;
    r37 = dyn any1(r36);
    check L48() else D18();
  L50():
    warn = ld warn;
    check L52() else D19();
  L51():
    r38 = dyn base6(<sym warn>, <sym f>);
    goto L9(i16, r38);
  L56():
    grepl2 = ldf grepl;
    check L58() else D22();
  L57():
    r42 = dyn base7(<lang grepl(pat3, readLines(f, warn=FALSE), perl=TRUE, useBytes=TRUE)>);
    goto L11(i22, r42);
  D18():
    deopt 207 [i12, r37];
  D19():
    deopt 210 [i16, warn];
  D22():
    deopt 222 [i22];
  L12():
    goto L14(i25);
  L14(i31):
    goto L2(i31);
  L48():
    goto L7(i12, r37);
  L52():
    warn1 = force? warn;
    checkMissing(warn1);
    f6 = ld f;
    check L53() else D20();
  L58():
    p10 = prom<V +>{
      pat4 = ld pat3;
      pat5 = force? pat4;
      checkMissing(pat5);
      return pat5;
    };
    p12 = prom<V +>{
      readLines2 = ldf readLines;
      p11 = prom<V +>{
        f8 = ld f;
        f9 = force? f8;
        checkMissing(f9);
        return f9;
      };
      r46 = dyn readLines2[, warn](p11, FALSE);
      return r46;
    };
    r48 = dyn grepl2[, , perl, useBytes](p10, p12, TRUE, TRUE);
    check L59() else D23();
  L61():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L62() else L63();
  D20():
    deopt 212 [i16, f6];
  D23():
    deopt 229 [i22, r48];
  L13(i30, r51):
    st port = r51;
    goto L14(i30);
  L53():
    f7 = force? f6;
    checkMissing(f7);
    c6 = ldf c in base;
    r40 = dyn c6(warn1, f7);
    check L54() else D21();
  L59():
    any2 = ldf any in base;
    r49 = dyn any2(r48);
    check L60() else D24();
  L62():
    port = ld port;
    check L64() else D25();
  L63():
    r50 = dyn base8(<sym port>, <sym f>);
    goto L13(i25, r50);
  D21():
    deopt 215 [i16, r40];
  D24():
    deopt 231 [i22, r49];
  D25():
    deopt 234 [i25, port];
  L54():
    goto L9(i16, r40);
  L60():
    goto L11(i22, r49);
  L64():
    port1 = force? port;
    checkMissing(port1);
    f10 = ld f;
    check L65() else D26();
  D26():
    deopt 236 [i25, f10];
  L65():
    f11 = force? f10;
    checkMissing(f11);
    c8 = ldf c in base;
    r52 = dyn c8(port1, f11);
    check L66() else D27();
  D27():
    deopt 239 [i25, r52];
  L66():
    goto L13(i25, r52);
  }
}