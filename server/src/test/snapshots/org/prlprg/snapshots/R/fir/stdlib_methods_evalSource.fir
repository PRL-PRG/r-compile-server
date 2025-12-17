fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1622300622;
    st evalSource = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1622300622(source, package, lock, cache) {
  (reg source:*, reg package:*, reg lock:*, reg cache:*) -+> V { var source:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, var lock:*, reg lock_isMissing:L, reg lock_orDefault:*, var cache:*, reg cache_isMissing:L, reg cache_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg package1:*, reg package2:V, reg nzchar:cls, reg r2:V, reg r3:V, reg c:L, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg paste0:cls, reg package3:*, reg package4:V, reg p:p(V +), reg r5:V, reg _in_:cls, reg pstring:*, reg pstring1:V, reg p1:p(V +), reg search:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg packageIsVisible:*, reg packageIsVisible1:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg pstring2:*, reg pstring3:V, reg as_environment:cls, reg r12:V, reg tryCatch:cls, reg asNamespace:cls, reg package5:*, reg package6:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg r17:cls, reg p5:p(V +), reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg envp:*, reg envp1:V, reg c2:V, reg c3:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg package7:*, reg package8:V, reg p6:p(V +), reg r23:V, reg p7:p(V +), reg r25:V, reg p8:p(V +), reg r27:V, reg new:cls, reg new_env:cls, reg envp2:*, reg envp3:V, reg p9:p(V +), reg r29:V, reg p10:p(V +), reg package9:*, reg package10:V, reg p11:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg source1:*, reg source2:V, reg c4:L, reg c5:L, reg source3:*, reg source4:V, reg source5:V, reg p12:p(V +), reg r35:V, reg package11:*, reg package12:V, reg l:*, reg c6:L, reg package14:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r36:V, reg setCacheOnAssign:cls, reg env:*, reg env1:V, reg p13:p(V +), reg cache1:*, reg cache2:V, reg p14:p(V +), reg r39:V, reg is:cls, reg source6:*, reg source7:V, reg p15:p(V +), reg r41:V, reg c7:L, reg source8:*, reg source9:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg sys_source:cls, reg text:*, reg text1:V, reg p16:p(V +), reg env2:*, reg env3:V, reg p17:p(V +), reg r44:V, reg is1:cls, reg source10:*, reg source11:V, reg p18:p(V +), reg r46:V, reg c9:L, reg sys_source1:cls, reg source12:*, reg source13:V, reg p19:p(V +), reg env4:*, reg env5:V, reg p20:p(V +), reg r49:V, reg is2:cls, reg source14:*, reg source15:V, reg p21:p(V +), reg r51:V, reg r52:V, reg c10:L, reg stop1:cls, reg gettextf1:cls, reg dQuote:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r53:V, reg r54:V, reg source16:*, reg source17:V, reg class:cls, reg r55:V, reg c11:L, reg r57:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r58:V, reg p22:p(V +), reg r60:V, reg p23:p(V +), reg r62:V, reg p24:p(V +), reg r64:V, reg lock1:*, reg lock2:V, reg c12:L, reg lockEnvironment:cls, reg env6:*, reg env7:V, reg p25:p(V +), reg r66:V, reg env8:*, reg env9:V |
    mkenv;
    st source = source;
    package_isMissing = missing.0(package);
    if package_isMissing then L0("") else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    lock_isMissing = missing.0(lock);
    if lock_isMissing then L1(TRUE) else L1(lock);
  L1(lock_orDefault):
    st lock = lock_orDefault;
    cache_isMissing = missing.0(cache);
    if cache_isMissing then L2(FALSE) else L2(cache);
  L2(cache_orDefault):
    st cache = cache_orDefault;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L3(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L23() else L4();
  L19():
    package1 = ld package;
    check L21() else D0();
  L20():
    r = dyn base(<sym package>);
    goto L3(r);
  D0():
    deopt 2 [package1];
  L4():
    paste0 = ldf paste0;
    check L26() else D3();
  L5():
    new = ldf new;
    check L46() else D15();
  L21():
    package2 = force? package1;
    checkMissing(package2);
    nzchar = ldf nzchar in base;
    r2 = dyn nzchar(package2);
    check L22() else D1();
  L23():
    _GlobalEnv = ld `.GlobalEnv`;
    check L24() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [_GlobalEnv];
  D3():
    deopt 11 [];
  D15():
    deopt 51 [];
  L22():
    goto L3(r2);
  L24():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    st envp = _GlobalEnv1;
    goto L5();
  L26():
    p = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    r5 = dyn paste0("package:", p);
    check L27() else D4();
  L46():
    p10 = prom<V +>{
      new_env = ldf `new.env`;
      p9 = prom<V +>{
        envp2 = ld envp;
        envp3 = force? envp2;
        checkMissing(envp3);
        return envp3;
      };
      r29 = dyn new_env[parent](p9);
      return r29;
    };
    p11 = prom<V +>{
      package9 = ld package;
      package10 = force? package9;
      checkMissing(package10);
      return package10;
    };
    p12 = prom<V +>{
      sym3 = ldf `is.character`;
      base3 = ldf `is.character` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L3() else L4();
    L0(r33):
      c5 = `as.logical`(r33);
      if c5 then L5() else L1();
    L3():
      source1 = ld source;
      source2 = force? source1;
      checkMissing(source2);
      c4 = `is.character`(source2);
      goto L0(c4);
    L4():
      r32 = dyn base3(<sym source>);
      goto L0(r32);
    L1():
      goto L2("");
    L2(source5):
      visible.0();
      return source5;
    L5():
      source3 = ld source;
      source4 = force? source3;
      checkMissing(source4);
      goto L2(source4);
    };
    r35 = dyn new[, , packageName, sourceFile]("sourceEnvironment", p10, p11, p12);
    check L47() else D16();
  D4():
    deopt 14 [r5];
  D16():
    deopt 58 [r35];
  L27():
    st pstring = r5;
    _in_ = ldf `%in%`;
    check L28() else D5();
  L47():
    st env = r35;
    package11 = ld package;
    check L48() else D17();
  D5():
    deopt 17 [];
  D17():
    deopt 60 [package11];
  L28():
    p1 = prom<V +>{
      pstring = ld pstring;
      pstring1 = force? pstring;
      checkMissing(pstring1);
      return pstring1;
    };
    p2 = prom<V +>{
      search = ldf search;
      r7 = dyn search();
      return r7;
    };
    r9 = dyn _in_(p1, p2);
    check L29() else D6();
  L48():
    package12 = force? package11;
    checkMissing(package12);
    l = ld env;
    c6 = `is.object`(l);
    if c6 then L50() else L51(package12, l);
  D6():
    deopt 20 [r9];
  L29():
    st packageIsVisible = r9;
    packageIsVisible = ld packageIsVisible;
    check L30() else D7();
  L49(dx1):
    st env = dx1;
    setCacheOnAssign = ldf setCacheOnAssign;
    check L53() else D18();
  L50():
    dr = tryDispatchBuiltin.0("$<-", l, package12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L52() else L51(package12, dr);
  L51(package14, l2):
    r36 = `$<-`(l2, <sym .packageName>, package12);
    goto L49(r36);
  D7():
    deopt 22 [packageIsVisible];
  D18():
    deopt 66 [];
  L30():
    packageIsVisible1 = force? packageIsVisible;
    checkMissing(packageIsVisible1);
    c1 = `as.logical`(packageIsVisible1);
    if c1 then L31() else L6();
  L52():
    dx = getTryDispatchBuiltinValue(dr);
    goto L49(dx);
  L53():
    p13 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    p14 = prom<V +>{
      cache1 = ld cache;
      cache2 = force? cache1;
      checkMissing(cache2);
      return cache2;
    };
    r39 = dyn setCacheOnAssign(p13, p14);
    check L54() else D19();
  D19():
    deopt 69 [r39];
  L6():
    tryCatch = ldf tryCatch;
    check L37() else D10();
  L8():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L31():
    sym1 = ldf `as.environment`;
    base1 = ldf `as.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L54():
    is = ldf is;
    check L55() else D20();
  D10():
    deopt 32 [];
  D20():
    deopt 71 [];
  L7(r11):
    st envp = r11;
    goto L8();
  L9(r21):
    c3 = `as.logical`(r21);
    if c3 then L42() else L10();
  L32():
    pstring2 = ld pstring;
    check L34() else D8();
  L33():
    r10 = dyn base1(<sym pstring>);
    goto L7(r10);
  L37():
    p4 = prom<V +>{
      asNamespace = ldf asNamespace;
      p3 = prom<V +>{
        package5 = ld package;
        package6 = force? package5;
        checkMissing(package6);
        return package6;
      };
      r15 = dyn asNamespace(p3);
      return r15;
    };
    p5 = prom<V +>{
      r17 = clos inner913928130;
      return r17;
    };
    r19 = dyn tryCatch[, error](p4, p5);
    check L38() else D11();
  L39():
    envp = ld envp;
    check L41() else D12();
  L40():
    r20 = dyn base2(<sym envp>);
    goto L9(r20);
  L55():
    p15 = prom<V +>{
      source6 = ld source;
      source7 = force? source6;
      checkMissing(source7);
      return source7;
    };
    r41 = dyn is(p15, "character");
    check L56() else D21();
  D8():
    deopt 26 [pstring2];
  D11():
    deopt 36 [r19];
  D12():
    deopt 39 [envp];
  D21():
    deopt 74 [r41];
  L10():
    goto L5();
  L34():
    pstring3 = force? pstring2;
    checkMissing(pstring3);
    as_environment = ldf `as.environment` in base;
    r12 = dyn as_environment(pstring3);
    check L35() else D9();
  L38():
    st envp = r19;
    goto L8();
  L41():
    envp1 = force? envp;
    checkMissing(envp1);
    c2 = `==`(envp1, NULL);
    goto L9(c2);
  L42():
    stop = ldf stop;
    check L43() else D13();
  L56():
    c7 = `as.logical`(r41);
    if c7 then L57() else L11();
  D9():
    deopt 29 [r12];
  D13():
    deopt 43 [];
  L11():
    is1 = ldf is;
    check L63() else D25();
  L14():
    lock1 = ld lock;
    check L75() else D33();
  L35():
    goto L7(r12);
  L43():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        sQuote = ldf sQuote;
        p6 = prom<V +>{
          package7 = ld package;
          package8 = force? package7;
          checkMissing(package8);
          return package8;
        };
        r23 = dyn sQuote(p6);
        return r23;
      };
      r25 = dyn gettextf("package %s is not attached and no namespace found for it", p7);
      return r25;
    };
    r27 = dyn stop[, domain](p8, NA_LGL);
    check L44() else D14();
  L57():
    source8 = ld source;
    check L58() else D22();
  D14():
    deopt 47 [r27];
  D22():
    deopt 75 [source8];
  D25():
    deopt 87 [];
  D33():
    deopt 111 [lock1];
  L44():
    goto L5();
  L58():
    source9 = force? source8;
    checkMissing(source9);
    s = toForSeq(source9);
    l3 = length(s);
    i = 0;
    goto L12(i);
  L63():
    p18 = prom<V +>{
      source10 = ld source;
      source11 = force? source10;
      checkMissing(source11);
      return source11;
    };
    r46 = dyn is1(p18, "connection");
    check L64() else D26();
  L75():
    lock2 = force? lock1;
    checkMissing(lock2);
    c12 = `as.logical`(lock2);
    if c12 then L76() else L17();
  D26():
    deopt 90 [r46];
  L12(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l3, i2);
    if c8 then L59() else L13();
  L17():
    goto L18();
  L18():
    env8 = ld env;
    check L80() else D36();
  L64():
    c9 = `as.logical`(r46);
    if c9 then L65() else L15();
  L76():
    lockEnvironment = ldf lockEnvironment;
    check L77() else D34();
  D34():
    deopt 114 [];
  D36():
    deopt 121 [env8];
  L13():
    x = `[[`(s, i2, NULL, TRUE);
    st text = x;
    sys_source = ldf `sys.source`;
    check L60() else D23();
  L15():
    is2 = ldf is;
    check L69() else D29();
  L59():
    goto L14();
  L65():
    sys_source1 = ldf `sys.source`;
    check L66() else D27();
  L77():
    p25 = prom<V +>{
      env6 = ld env;
      env7 = force? env6;
      checkMissing(env7);
      return env7;
    };
    r66 = dyn lockEnvironment[, bindings](p25, TRUE);
    check L78() else D35();
  L80():
    env9 = force? env8;
    checkMissing(env9);
    popenv;
    return env9;
  D23():
    deopt 78 [i2];
  D27():
    deopt 92 [];
  D29():
    deopt 98 [];
  D35():
    deopt 118 [r66];
  L60():
    p16 = prom<V +>{
      text = ld text;
      text1 = force? text;
      checkMissing(text1);
      return text1;
    };
    p17 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r44 = dyn sys_source[, envir](p16, p17);
    check L61() else D24();
  L66():
    p19 = prom<V +>{
      source12 = ld source;
      source13 = force? source12;
      checkMissing(source13);
      return source13;
    };
    p20 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r49 = dyn sys_source1[, envir](p19, p20);
    check L67() else D28();
  L69():
    p21 = prom<V +>{
      source14 = ld source;
      source15 = force? source14;
      checkMissing(source15);
      return source15;
    };
    r51 = dyn is2(p21, "environment");
    check L70() else D30();
  L78():
    goto L18();
  D24():
    deopt 82 [i2, r44];
  D28():
    deopt 96 [r49];
  D30():
    deopt 101 [r51];
  L61():
    goto L12(i2);
  L67():
    goto L14();
  L70():
    r52 = `!`(r51);
    c10 = `as.logical`(r52);
    if c10 then L71() else L16();
  L16():
    goto L14();
  L71():
    stop1 = ldf stop;
    check L72() else D31();
  D31():
    deopt 104 [];
  L72():
    p24 = prom<V +>{
      gettextf1 = ldf gettextf;
      p23 = prom<V +>{
        dQuote = ldf dQuote;
        p22 = prom<V +>{
          sym4 = ldf class;
          base4 = ldf class in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L2() else L3();
        L0(r54):
          c11 = `is.object`(r54);
          if c11 then L4() else L5(r54);
        L2():
          source16 = ld source;
          source17 = force? source16;
          checkMissing(source17);
          class = ldf class in base;
          r55 = dyn class(source17);
          goto L0(r55);
        L3():
          r53 = dyn base4(<sym source>);
          goto L0(r53);
        L1(dx3):
          return dx3;
        L4():
          dr2 = tryDispatchBuiltin.1("[[", r54);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L6() else L5(dr2);
        L5(r57):
          __ = ldf `[[` in base;
          r58 = dyn __(r57, 1);
          goto L1(r58);
        L6():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L1(dx2);
        };
        r60 = dyn dQuote(p22);
        return r60;
      };
      r62 = dyn gettextf1("invalid 'source' argument: expected file names or a connection but got an object of class %s", p23);
      return r62;
    };
    r64 = dyn stop1[, domain](p24, NA_LGL);
    check L73() else D32();
  D32():
    deopt 108 [r64];
  L73():
    goto L14();
  }
}
fun inner913928130(cond) {
  (reg cond:*) -+> V { var cond:* |
    mkenv;
    st cond = cond;
    popenv;
    return NULL;
  }
}