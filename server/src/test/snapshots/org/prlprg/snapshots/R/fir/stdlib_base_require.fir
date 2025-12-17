fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3165970178;
    st require = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3165970178(package, `lib.loc`, quietly, `warn.conflicts`, `character.only`, `mask.ok`, exclude, `include.only`, `attach.required`) {
  (reg package:*, reg lib_loc:*, reg quietly:*, reg warn_conflicts:*, reg character_only:*, reg mask_ok:*, reg exclude:*, reg include_only:*, reg attach_required:*) -+> V { var package:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var quietly:*, reg quietly_isMissing:L, reg quietly_orDefault:*, var `warn.conflicts`:*, var `character.only`:*, reg character_only_isMissing:L, reg character_only_orDefault:*, var `mask.ok`:*, var exclude:*, var `include.only`:*, var `attach.required`:*, reg attach_required_isMissing:L, reg attach_required_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg p:p(V +), reg character_only1:*, reg character_only2:V, reg r4:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg substitute:cls, reg r9:V, reg as_character:cls, reg r10:V, reg _in_:cls, reg paste0:cls, reg package1:*, reg package2:V, reg p1:p(V +), reg r13:V, reg p2:p(V +), reg search:cls, reg r15:V, reg p3:p(V +), reg r17:V, reg loaded:*, reg loaded1:V, reg r18:V, reg c1:L, reg quietly1:*, reg quietly2:V, reg r19:V, reg c2:L, reg packageStartupMessage:cls, reg gettextf:cls, reg package3:*, reg package4:V, reg p4:p(V +), reg r21:V, reg p5:p(V +), reg r23:V, reg tryCatch:cls, reg library:cls, reg package5:*, reg package6:V, reg p6:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p7:p(V +), reg warn_conflicts1:*, reg warn_conflicts2:V, reg p8:p(V +), reg quietly3:*, reg quietly4:V, reg p9:p(V +), reg mask_ok1:*, reg mask_ok2:V, reg p10:p(V +), reg exclude1:*, reg exclude2:V, reg p11:p(V +), reg include_only1:*, reg include_only2:V, reg p12:p(V +), reg attach_required1:*, reg attach_required2:V, reg p13:p(V +), reg r33:V, reg p14:p(V +), reg r35:cls, reg p15:p(V +), reg r37:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg r39:V, reg value:*, reg value1:V, reg inherits:cls, reg r40:V, reg c3:L, reg quietly5:*, reg quietly6:V, reg r41:V, reg c4:L, reg conditionMessage:cls, reg value2:*, reg value3:V, reg p16:p(V +), reg r43:V, reg cat:cls, reg sQuote:cls, reg msg:*, reg msg1:V, reg p17:p(V +), reg r45:V, reg p18:p(V +), reg stderr:cls, reg r47:V, reg p19:p(V +), reg r49:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r50:V, reg r51:V, reg printDeferredWarnings:cls, reg r52:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r54:V, reg r55:V, reg invisible:cls, reg r56:V, reg value4:*, reg value5:V, reg r59:V, reg c5:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r60:V, reg r61:V, reg invisible1:cls, reg r62:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r66:V, reg r67:V, reg value6:*, reg value7:V, reg invisible2:cls, reg r68:V |
    mkenv;
    st package = package;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    quietly_isMissing = missing.0(quietly);
    if quietly_isMissing then L1(FALSE) else L1(quietly);
  L1(quietly_orDefault):
    st quietly = quietly_orDefault;
    st `warn.conflicts` = warn_conflicts;
    character_only_isMissing = missing.0(character_only);
    if character_only_isMissing then L2(FALSE) else L2(character_only);
  L2(character_only_orDefault):
    st `character.only` = character_only_orDefault;
    st `mask.ok` = mask_ok;
    st exclude = exclude;
    st `include.only` = include_only;
    attach_required_isMissing = missing.0(attach_required);
    if attach_required_isMissing then L3() else L4(attach_required);
  L3():
    p = prom<V +>{
      sym = ldf missing;
      base = ldf missing in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      missing = ldf missing in base;
      r2 = dyn missing(<sym include.only>);
      goto L0(r2);
    L2():
      r = dyn base(<sym include.only>);
      goto L0(r);
    };
    goto L4(p);
  L4(attach_required_orDefault):
    st `attach.required` = attach_required_orDefault;
    character_only1 = ld `character.only`;
    check L24() else D0();
  D0():
    deopt 0 [character_only1];
  L24():
    character_only2 = force? character_only1;
    checkMissing(character_only2);
    r4 = `!`(character_only2);
    c = `as.logical`(r4);
    if c then L25() else L5();
  L5():
    goto L8();
  L8():
    _in_ = ldf `%in%`;
    check L32() else D2();
  L25():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  D2():
    deopt 14 [];
  L6(r6):
    st package = r6;
    goto L8();
  L26():
    sym2 = ldf substitute;
    base2 = ldf substitute in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L27():
    r5 = dyn base1(<lang substitute(package)>);
    goto L6(r5);
  L32():
    p2 = prom<V +>{
      paste0 = ldf paste0;
      p1 = prom<V +>{
        package1 = ld package;
        package2 = force? package1;
        checkMissing(package2);
        return package2;
      };
      r13 = dyn paste0("package:", p1);
      return r13;
    };
    p3 = prom<V +>{
      search = ldf search;
      r15 = dyn search();
      return r15;
    };
    r17 = dyn _in_(p2, p3);
    check L33() else D3();
  D3():
    deopt 17 [r17];
  L7(r8):
    as_character = ldf `as.character` in base;
    r10 = dyn as_character(r8);
    check L30() else D1();
  L28():
    substitute = ldf substitute in base;
    r9 = dyn substitute(<sym package>);
    goto L7(r9);
  L29():
    r7 = dyn base2(<sym package>);
    goto L7(r7);
  L33():
    st loaded = r17;
    loaded = ld loaded;
    check L34() else D4();
  D1():
    deopt 9 [r10];
  D4():
    deopt 19 [loaded];
  L30():
    goto L6(r10);
  L34():
    loaded1 = force? loaded;
    checkMissing(loaded1);
    r18 = `!`(loaded1);
    c1 = `as.logical`(r18);
    if c1 then L35() else L9();
  L9():
    st value = TRUE;
    goto L22();
  L22():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L71() else L72();
  L35():
    quietly1 = ld quietly;
    check L36() else D5();
  D5():
    deopt 22 [quietly1];
  L23(r67):
    popenv;
    return r67;
  L36():
    quietly2 = force? quietly1;
    checkMissing(quietly2);
    r19 = `!`(quietly2);
    c2 = `as.logical`(r19);
    if c2 then L37() else L10();
  L71():
    value6 = ld value;
    check L73() else D21();
  L72():
    r66 = dyn base7(<sym value>);
    goto L23(r66);
  D21():
    deopt 96 [value6];
  L10():
    goto L11();
  L11():
    tryCatch = ldf tryCatch;
    check L41() else D8();
  L37():
    packageStartupMessage = ldf packageStartupMessage;
    check L38() else D6();
  L73():
    value7 = force? value6;
    checkMissing(value7);
    invisible2 = ldf invisible in base;
    r68 = dyn invisible2(value7);
    check L74() else D22();
  D6():
    deopt 26 [];
  D8():
    deopt 34 [];
  D22():
    deopt 99 [r68];
  L38():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        package3 = ld package;
        package4 = force? package3;
        checkMissing(package4);
        return package4;
      };
      r21 = dyn gettextf("Loading required package: %s", p4);
      return r21;
    };
    r23 = dyn packageStartupMessage[, domain](p5, NA_LGL);
    check L39() else D7();
  L41():
    p14 = prom<V +>{
      library = ldf library;
      p6 = prom<V +>{
        package5 = ld package;
        package6 = force? package5;
        checkMissing(package6);
        return package6;
      };
      p7 = prom<V +>{
        lib_loc1 = ld `lib.loc`;
        lib_loc2 = force? lib_loc1;
        checkMissing(lib_loc2);
        return lib_loc2;
      };
      p8 = prom<V +>{
        warn_conflicts1 = ld `warn.conflicts`;
        warn_conflicts2 = force? warn_conflicts1;
        checkMissing(warn_conflicts2);
        return warn_conflicts2;
      };
      p9 = prom<V +>{
        quietly3 = ld quietly;
        quietly4 = force? quietly3;
        checkMissing(quietly4);
        return quietly4;
      };
      p10 = prom<V +>{
        mask_ok1 = ld `mask.ok`;
        mask_ok2 = force? mask_ok1;
        checkMissing(mask_ok2);
        return mask_ok2;
      };
      p11 = prom<V +>{
        exclude1 = ld exclude;
        exclude2 = force? exclude1;
        checkMissing(exclude2);
        return exclude2;
      };
      p12 = prom<V +>{
        include_only1 = ld `include.only`;
        include_only2 = force? include_only1;
        checkMissing(include_only2);
        return include_only2;
      };
      p13 = prom<V +>{
        attach_required1 = ld `attach.required`;
        attach_required2 = force? attach_required1;
        checkMissing(attach_required2);
        return attach_required2;
      };
      r33 = dyn library[, `lib.loc`, `character.only`, `logical.return`, `warn.conflicts`, quietly, `mask.ok`, exclude, `include.only`, `attach.required`](p6, p7, TRUE, TRUE, p8, p9, p10, p11, p12, p13);
      return r33;
    };
    p15 = prom<V +>{
      r35 = clos inner3708401697;
      return r35;
    };
    r37 = dyn tryCatch[, error](p14, p15);
    check L42() else D9();
  L74():
    goto L23(r68);
  D7():
    deopt 30 [r23];
  D9():
    deopt 38 [r37];
  L39():
    goto L11();
  L42():
    st value = r37;
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L12(r39):
    c3 = `as.logical`(r39);
    if c3 then L47() else L13();
  L43():
    value = ld value;
    check L45() else D10();
  L44():
    r38 = dyn base3(<sym value>, "error");
    goto L12(r38);
  D10():
    deopt 42 [value];
  L13():
    value4 = ld value;
    check L63() else D19();
  L45():
    value1 = force? value;
    checkMissing(value1);
    inherits = ldf inherits in base;
    r40 = dyn inherits(value1, "error", FALSE);
    check L46() else D11();
  L47():
    quietly5 = ld quietly;
    check L48() else D12();
  D11():
    deopt 47 [r40];
  D12():
    deopt 48 [quietly5];
  D19():
    deopt 80 [value4];
  L46():
    goto L12(r40);
  L48():
    quietly6 = force? quietly5;
    checkMissing(quietly6);
    r41 = `!`(quietly6);
    c4 = `as.logical`(r41);
    if c4 then L49() else L14();
  L63():
    value5 = force? value4;
    checkMissing(value5);
    r59 = `!`(value5);
    c5 = `as.logical`(r59);
    if c5 then L64() else L19();
  L14():
    goto L16();
  L16():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L58() else L59();
  L19():
    goto L22();
  L49():
    conditionMessage = ldf conditionMessage;
    check L50() else D13();
  L64():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  D13():
    deopt 52 [];
  L17(r55):
    popenv;
    return r55;
  L20(r61):
    popenv;
    return r61;
  L50():
    p16 = prom<V +>{
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      return value3;
    };
    r43 = dyn conditionMessage(p16);
    check L51() else D14();
  L58():
    invisible = ldf invisible in base;
    r56 = dyn invisible(FALSE);
    check L60() else D18();
  L59():
    r54 = dyn base5(FALSE);
    goto L17(r54);
  L65():
    invisible1 = ldf invisible in base;
    r62 = dyn invisible1(FALSE);
    check L67() else D20();
  L66():
    r60 = dyn base6(FALSE);
    goto L20(r60);
  D14():
    deopt 54 [r43];
  D18():
    deopt 76 [r56];
  D20():
    deopt 87 [r62];
  L51():
    st msg = r43;
    cat = ldf cat;
    check L52() else D15();
  L60():
    goto L17(r56);
  L67():
    goto L20(r62);
  D15():
    deopt 57 [];
  L52():
    p18 = prom<V +>{
      sQuote = ldf sQuote;
      p17 = prom<V +>{
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        return msg1;
      };
      r45 = dyn sQuote(p17);
      return r45;
    };
    p19 = prom<V +>{
      stderr = ldf stderr;
      r47 = dyn stderr();
      return r47;
    };
    r49 = dyn cat[, , , file, sep]("Failed with error:  ", p18, "\n", p19, "");
    check L53() else D16();
  D16():
    deopt 65 [r49];
  L53():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  L15(r51):
    goto L16();
  L54():
    printDeferredWarnings = ldf printDeferredWarnings in base;
    r52 = dyn printDeferredWarnings();
    check L56() else D17();
  L55():
    r50 = dyn base4(<lang printDeferredWarnings()>);
    goto L15(r50);
  D17():
    deopt 69 [r52];
  L56():
    goto L15(r52);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg e1:*, reg e2:V |
    mkenv;
    st e = e;
    e1 = ld e;
    check L0() else D0();
  D0():
    deopt 0 [e1];
  L0():
    e2 = force? e1;
    checkMissing(e2);
    popenv;
    return e2;
  }
}