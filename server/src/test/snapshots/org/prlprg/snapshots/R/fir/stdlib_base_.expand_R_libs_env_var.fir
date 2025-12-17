fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.expand_R_libs_env_var` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste:cls, reg R_version:*, reg R_version1:V, reg c:L, reg R_version3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg R_version6:V, reg r1:V, reg c1:cls, reg r2:V, reg __:cls, reg r3:V, reg p:p(V +), reg r5:V, reg Sys_info:cls, reg r6:V, reg r7:cls, reg file_path:cls, reg R_home:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg r11:cls, reg expand:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg v:*, reg v1:V, reg p3:p(V +), reg r14:V, reg expand1:cls, reg x3:*, reg x4:V, reg p4:p(V +), reg sub:cls, reg v2:*, reg v3:V, reg p5:p(V +), reg r17:V, reg p6:p(V +), reg r19:V, reg expand2:cls, reg x5:*, reg x6:V, reg p7:p(V +), reg R_version7:*, reg R_version8:V, reg c2:L, reg R_version10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r21:V, reg p8:p(V +), reg r23:V, reg expand3:cls, reg x7:*, reg x8:V, reg p9:p(V +), reg R_version11:*, reg R_version12:V, reg c3:L, reg R_version14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r25:V, reg p10:p(V +), reg r27:V, reg expand4:cls, reg x9:*, reg x10:V, reg p11:p(V +), reg R_version15:*, reg R_version16:V, reg c4:L, reg R_version18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r29:V, reg p12:p(V +), reg r31:V, reg expand5:cls, reg x11:*, reg x12:V, reg p13:p(V +), reg R_LIBS_USER_default:cls, reg r33:V, reg p14:p(V +), reg r35:V, reg expand6:cls, reg x13:*, reg x14:V, reg p15:p(V +), reg R_LIBS_SITE_default:*, reg R_LIBS_SITE_default1:V, reg p16:p(V +), reg r38:V, reg gsub:cls, reg x15:*, reg x16:V, reg p17:p(V +), reg r40:V |
    mkenv;
    st x = x;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c = `is.object`(R_version1);
      if c then L2() else L3(R_version1);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", R_version1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(R_version3):
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L1(R_version6, r1):
      __ = ldf `[` in base;
      r3 = dyn __(R_version6, r1);
      goto L0(r3);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      c1 = ldf c in base;
      r2 = dyn c1("major", "minor");
      goto L1(R_version3, r2);
    L6():
      r = dyn base("major", "minor");
      goto L1(R_version3, r);
    };
    r5 = dyn paste[, collapse](p, ".");
    check L1() else D1();
  D1():
    deopt 5 [r5];
  L1():
    st v = r5;
    Sys_info = ldf `Sys.info`;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    r6 = dyn Sys_info();
    check L3() else D3();
  D3():
    deopt 9 [r6];
  L3():
    st s = r6;
    r7 = clos inner2708337952;
    st R_LIBS_USER_default = r7;
    file_path = ldf `file.path`;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p1 = prom<V +>{
      R_home = ldf `R.home`;
      r8 = dyn R_home();
      return r8;
    };
    r10 = dyn file_path(p1, "site-library");
    check L5() else D5();
  D5():
    deopt 18 [r10];
  L5():
    st R_LIBS_SITE_default = r10;
    r11 = clos inner625330020;
    st expand = r11;
    expand = ldf expand;
    check L6() else D6();
  D6():
    deopt 24 [];
  L6():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p3 = prom<V +>{
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      return v1;
    };
    r14 = dyn expand(p2, "V", p3);
    check L7() else D7();
  D7():
    deopt 28 [r14];
  L7():
    st x = r14;
    expand1 = ldf expand;
    check L8() else D8();
  D8():
    deopt 31 [];
  L8():
    p4 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p6 = prom<V +>{
      sub = ldf sub;
      p5 = prom<V +>{
        v2 = ld v;
        v3 = force? v2;
        checkMissing(v3);
        return v3;
      };
      r17 = dyn sub("\\.[^.]*$", "", p5);
      return r17;
    };
    r19 = dyn expand1(p4, "v", p6);
    check L9() else D9();
  D9():
    deopt 35 [r19];
  L9():
    st x = r19;
    expand2 = ldf expand;
    check L10() else D10();
  D10():
    deopt 38 [];
  L10():
    p7 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p8 = prom<V +>{
      R_version7 = ld `R.version`;
      R_version8 = force? R_version7;
      checkMissing(R_version8);
      c2 = `is.object`(R_version8);
      if c2 then L1() else L2(R_version8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", R_version8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(R_version10):
      r21 = `$`(R_version10, <sym platform>);
      goto L0(r21);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r23 = dyn expand2(p7, "p", p8);
    check L11() else D11();
  D11():
    deopt 42 [r23];
  L11():
    st x = r23;
    expand3 = ldf expand;
    check L12() else D12();
  D12():
    deopt 45 [];
  L12():
    p9 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p10 = prom<V +>{
      R_version11 = ld `R.version`;
      R_version12 = force? R_version11;
      checkMissing(R_version12);
      c3 = `is.object`(R_version12);
      if c3 then L1() else L2(R_version12);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", R_version12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(R_version14):
      r25 = `$`(R_version14, <sym arch>);
      goto L0(r25);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r27 = dyn expand3(p9, "a", p10);
    check L13() else D13();
  D13():
    deopt 49 [r27];
  L13():
    st x = r27;
    expand4 = ldf expand;
    check L14() else D14();
  D14():
    deopt 52 [];
  L14():
    p11 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p12 = prom<V +>{
      R_version15 = ld `R.version`;
      R_version16 = force? R_version15;
      checkMissing(R_version16);
      c4 = `is.object`(R_version16);
      if c4 then L1() else L2(R_version16);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", R_version16);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(R_version18):
      r29 = `$`(R_version18, <sym os>);
      goto L0(r29);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r31 = dyn expand4(p11, "o", p12);
    check L15() else D15();
  D15():
    deopt 56 [r31];
  L15():
    st x = r31;
    expand5 = ldf expand;
    check L16() else D16();
  D16():
    deopt 59 [];
  L16():
    p13 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p14 = prom<V +>{
      R_LIBS_USER_default = ldf R_LIBS_USER_default;
      r33 = dyn R_LIBS_USER_default();
      return r33;
    };
    r35 = dyn expand5(p13, "U", p14);
    check L17() else D17();
  D17():
    deopt 63 [r35];
  L17():
    st x = r35;
    expand6 = ldf expand;
    check L18() else D18();
  D18():
    deopt 66 [];
  L18():
    p15 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p16 = prom<V +>{
      R_LIBS_SITE_default = ld R_LIBS_SITE_default;
      R_LIBS_SITE_default1 = force? R_LIBS_SITE_default;
      checkMissing(R_LIBS_SITE_default1);
      return R_LIBS_SITE_default1;
    };
    r38 = dyn expand6(p15, "S", p16);
    check L19() else D19();
  D19():
    deopt 70 [r38];
  L19():
    st x = r38;
    gsub = ldf gsub;
    check L20() else D20();
  D20():
    deopt 73 [];
  L20():
    p17 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r40 = dyn gsub[, , , fixed]("%%", "%", p17, TRUE);
    check L21() else D21();
  D21():
    deopt 79 [r40];
  L21():
    popenv;
    return r40;
  }
}
fun inner2708337952() {
  () -+> V { reg normalizePath:cls, reg r:V, reg paste:cls, reg R_version:*, reg R_version1:V, reg c:L, reg R_version3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p:p(V +), reg strsplit:cls, reg R_version4:*, reg R_version5:V, reg c1:L, reg R_version7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r3:V, reg p1:p(V +), reg r5:V, reg c2:L, reg r7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __:cls, reg r8:V, reg c3:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg __1:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg _Platform:*, reg _Platform1:V, reg c4:L, reg _Platform3:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r12:V, reg r13:V, reg c5:L, reg c7:V, reg s:*, reg s1:V, reg c8:L, reg c10:L, reg s3:V, reg dr10:V, reg dc5:L, reg dx12:V, reg c12:L, reg dx13:V, reg __2:cls, reg r14:V, reg r15:V, reg c13:L, reg c14:V, reg c16:L, reg file_path:cls, reg Sys_getenv:cls, reg r16:V, reg p3:p(V +), reg x_y:*, reg x_y1:V, reg p4:p(V +), reg r19:V, reg _Platform4:*, reg _Platform5:V, reg c17:L, reg _Platform7:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r20:V, reg r21:V, reg c18:L, reg file_path1:cls, reg Sys_getenv1:cls, reg r22:V, reg p5:p(V +), reg paste1:cls, reg s4:*, reg s5:V, reg c19:L, reg s7:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg __3:cls, reg r24:V, reg p6:p(V +), reg r26:V, reg p7:p(V +), reg x_y2:*, reg x_y3:V, reg p8:p(V +), reg r29:V, reg s8:*, reg s9:V, reg c20:L, reg s11:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg __4:cls, reg r30:V, reg r31:V, reg c21:L, reg file_path2:cls, reg home:*, reg home1:V, reg p9:p(V +), reg s12:*, reg s13:V, reg c22:L, reg s15:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg __5:cls, reg r33:V, reg p10:p(V +), reg x_y4:*, reg x_y5:V, reg p11:p(V +), reg r36:V, reg file_path3:cls, reg home2:*, reg home3:V, reg p12:p(V +), reg paste2:cls, reg R_version8:*, reg R_version9:V, reg c23:L, reg R_version11:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg r38:V, reg p13:p(V +), reg r40:V, reg p14:p(V +), reg x_y6:*, reg x_y7:V, reg p15:p(V +), reg r43:V |
    mkenv;
    normalizePath = ldf normalizePath;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    r = dyn normalizePath[, mustWork]("~", FALSE);
    check L7() else D1();
  D1():
    deopt 5 [r];
  L7():
    st home = r;
    paste = ldf paste;
    check L8() else D2();
  D2():
    deopt 8 [];
  L8():
    p = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c = `is.object`(R_version1);
      if c then L1() else L2(R_version1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", R_version1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(R_version3):
      r1 = `$`(R_version3, <sym major>);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      strsplit = ldf strsplit;
      p1 = prom<V +>{
        R_version4 = ld `R.version`;
        R_version5 = force? R_version4;
        checkMissing(R_version5);
        c1 = `is.object`(R_version5);
        if c1 then L1() else L2(R_version5);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", R_version5);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(R_version7):
        r3 = `$`(R_version7, <sym minor>);
        goto L0(r3);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r5 = dyn strsplit[, , fixed](p1, ".", TRUE);
      c2 = `is.object`(r5);
      if c2 then L2() else L3(r5);
    L0(dx5):
      c3 = `is.object`(dx5);
      if c3 then L5() else L6(dx5);
    L2():
      dr4 = tryDispatchBuiltin.1("[[", r5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(r7):
      __ = ldf `[[` in base;
      r8 = dyn __(r7, 1);
      goto L0(r8);
    L1(dx9):
      return dx9;
    L4():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    L5():
      dr6 = tryDispatchBuiltin.1("[", dx5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L7() else L6(dr6);
    L6(dx7):
      __1 = ldf `[` in base;
      r9 = dyn __1(dx7, 1);
      goto L1(r9);
    L7():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx8);
    };
    r11 = dyn paste[, sep, ](p, ".", p2);
    check L9() else D3();
  D3():
    deopt 13 [r11];
  L9():
    st `x.y` = r11;
    _Platform = ld `.Platform`;
    check L10() else D4();
  D4():
    deopt 15 [_Platform];
  L10():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c4 = `is.object`(_Platform1);
    if c4 then L12() else L13(_Platform1);
  L11(dx11):
    r13 = `==`(dx11, "windows");
    c5 = `as.logical`(r13);
    if c5 then L15() else L0(c5);
  L12():
    dr8 = tryDispatchBuiltin.1("$", _Platform1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L14() else L13(dr8);
  L13(_Platform3):
    r12 = `$`(_Platform3, <sym OS.type>);
    goto L11(r12);
  L0(c7):
    c16 = `as.logical`(c7);
    if c16 then L21() else L2();
  L14():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L11(dx10);
  L15():
    s = ld s;
    check L16() else D5();
  D5():
    deopt 20 [c5, s];
  L2():
    _Platform4 = ld `.Platform`;
    check L25() else D8();
  L16():
    s1 = force? s;
    checkMissing(s1);
    c8 = `is.object`(s1);
    if c8 then L17() else L18(c5, s1);
  L21():
    file_path = ldf `file.path`;
    check L22() else D6();
  D6():
    deopt 29 [];
  D8():
    deopt 35 [_Platform4];
  L1(c12, dx13):
    r15 = `==`(dx13, "x86-64");
    c13 = `as.logical`(r15);
    c14 = `&&`(c12, c13);
    goto L0(c14);
  L17():
    dr10 = tryDispatchBuiltin.1("[", s1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L19() else L18(c5, dr10);
  L18(c10, s3):
    __2 = ldf `[` in base;
    r14 = dyn __2(s3, "machine");
    goto L1(c10, r14);
  L22():
    p3 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r16 = dyn Sys_getenv("LOCALAPPDATA");
      return r16;
    };
    p4 = prom<V +>{
      x_y = ld `x.y`;
      x_y1 = force? x_y;
      checkMissing(x_y1);
      return x_y1;
    };
    r19 = dyn file_path(p3, "R", "win-library", p4);
    check L23() else D7();
  L25():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c17 = `is.object`(_Platform5);
    if c17 then L27() else L28(_Platform5);
  D7():
    deopt 34 [r19];
  L19():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L1(c5, dx12);
  L23():
    popenv;
    return r19;
  L26(dx15):
    r21 = `==`(dx15, "windows");
    c18 = `as.logical`(r21);
    if c18 then L30() else L3();
  L27():
    dr12 = tryDispatchBuiltin.1("$", _Platform5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L29() else L28(dr12);
  L28(_Platform7):
    r20 = `$`(_Platform7, <sym OS.type>);
    goto L26(r20);
  L3():
    s8 = ld s;
    check L34() else D11();
  L29():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L26(dx14);
  L30():
    file_path1 = ldf `file.path`;
    check L31() else D9();
  D9():
    deopt 41 [];
  D11():
    deopt 47 [s8];
  L31():
    p5 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r22 = dyn Sys_getenv1("LOCALAPPDATA");
      return r22;
    };
    p7 = prom<V +>{
      paste1 = ldf paste0;
      p6 = prom<V +>{
        s4 = ld s;
        s5 = force? s4;
        checkMissing(s5);
        c19 = `is.object`(s5);
        if c19 then L1() else L2(s5);
      L0(dx17):
        return dx17;
      L1():
        dr14 = tryDispatchBuiltin.1("[", s5);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(s7):
        __3 = ldf `[` in base;
        r24 = dyn __3(s7, "machine");
        goto L0(r24);
      L3():
        dx16 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx16);
      };
      r26 = dyn paste1(p6, "-library");
      return r26;
    };
    p8 = prom<V +>{
      x_y2 = ld `x.y`;
      x_y3 = force? x_y2;
      checkMissing(x_y3);
      return x_y3;
    };
    r29 = dyn file_path1(p5, "R", p7, p8);
    check L32() else D10();
  L34():
    s9 = force? s8;
    checkMissing(s9);
    c20 = `is.object`(s9);
    if c20 then L35() else L36(s9);
  D10():
    deopt 46 [r29];
  L4(dx19):
    r31 = `==`(dx19, "Darwin");
    c21 = `as.logical`(r31);
    if c21 then L38() else L5();
  L32():
    popenv;
    return r29;
  L35():
    dr16 = tryDispatchBuiltin.1("[", s9);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L37() else L36(dr16);
  L36(s11):
    __4 = ldf `[` in base;
    r30 = dyn __4(s11, "sysname");
    goto L4(r30);
  L5():
    file_path3 = ldf `file.path`;
    check L42() else D14();
  L37():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L4(dx18);
  L38():
    file_path2 = ldf `file.path`;
    check L39() else D12();
  D12():
    deopt 55 [];
  D14():
    deopt 64 [];
  L39():
    p9 = prom<V +>{
      home = ld home;
      home1 = force? home;
      checkMissing(home1);
      return home1;
    };
    p10 = prom<V +>{
      s12 = ld s;
      s13 = force? s12;
      checkMissing(s13);
      c22 = `is.object`(s13);
      if c22 then L1() else L2(s13);
    L0(dx21):
      return dx21;
    L1():
      dr18 = tryDispatchBuiltin.1("[", s13);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(s15):
      __5 = ldf `[` in base;
      r33 = dyn __5(s15, "machine");
      goto L0(r33);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx20);
    };
    p11 = prom<V +>{
      x_y4 = ld `x.y`;
      x_y5 = force? x_y4;
      checkMissing(x_y5);
      return x_y5;
    };
    r36 = dyn file_path2(p9, "Library", "R", p10, p11, "library");
    check L40() else D13();
  L42():
    p12 = prom<V +>{
      home2 = ld home;
      home3 = force? home2;
      checkMissing(home3);
      return home3;
    };
    p14 = prom<V +>{
      paste2 = ldf paste0;
      p13 = prom<V +>{
        R_version8 = ld `R.version`;
        R_version9 = force? R_version8;
        checkMissing(R_version9);
        c23 = `is.object`(R_version9);
        if c23 then L1() else L2(R_version9);
      L0(dx23):
        return dx23;
      L1():
        dr20 = tryDispatchBuiltin.1("$", R_version9);
        dc10 = getTryDispatchBuiltinDispatched(dr20);
        if dc10 then L3() else L2(dr20);
      L2(R_version11):
        r38 = `$`(R_version11, <sym platform>);
        goto L0(r38);
      L3():
        dx22 = getTryDispatchBuiltinValue(dr20);
        goto L0(dx22);
      };
      r40 = dyn paste2(p13, "-library");
      return r40;
    };
    p15 = prom<V +>{
      x_y6 = ld `x.y`;
      x_y7 = force? x_y6;
      checkMissing(x_y7);
      return x_y7;
    };
    r43 = dyn file_path3(p12, "R", p14, p15);
    check L43() else D15();
  D13():
    deopt 62 [r36];
  D15():
    deopt 69 [r43];
  L40():
    popenv;
    return r36;
  L43():
    popenv;
    return r43;
  }
}
fun inner625330020(x, spec, expansion) {
  (reg x:*, reg spec:*, reg expansion:*) -+> V { var x:*, var spec:*, var expansion:*, reg sprintf:cls, reg gsub:cls, reg expansion1:*, reg expansion2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg gsub1:cls, reg paste0:cls, reg spec1:*, reg spec2:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg replace:*, reg replace1:V, reg p4:p(V +), reg x1:*, reg x2:V, reg p5:p(V +), reg r9:V |
    mkenv;
    st x = x;
    st spec = spec;
    st expansion = expansion;
    sprintf = ldf sprintf;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      gsub = ldf gsub;
      p = prom<V +>{
        expansion1 = ld expansion;
        expansion2 = force? expansion1;
        checkMissing(expansion2);
        return expansion2;
      };
      r1 = dyn gsub("([\\])", "\\\\\\1", p);
      return r1;
    };
    r3 = dyn sprintf("\\1\\2%s", p1);
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    st replace = r3;
    gsub1 = ldf gsub;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p3 = prom<V +>{
      paste0 = ldf paste0;
      p2 = prom<V +>{
        spec1 = ld spec;
        spec2 = force? spec1;
        checkMissing(spec2);
        return spec2;
      };
      r5 = dyn paste0("(^|[^%])(%%)*%", p2);
      return r5;
    };
    p4 = prom<V +>{
      replace = ld replace;
      replace1 = force? replace;
      checkMissing(replace1);
      return replace1;
    };
    p5 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r9 = dyn gsub1(p3, p4, p5);
    check L3() else D3();
  D3():
    deopt 11 [r9];
  L3():
    popenv;
    return r9;
  }
}