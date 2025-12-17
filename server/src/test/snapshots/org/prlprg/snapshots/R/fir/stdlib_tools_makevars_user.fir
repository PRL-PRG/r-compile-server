fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st makevars_user = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg character:cls, reg r:V, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg r2:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg Sys_getenv:cls, reg r5:V, reg is_na:cls, reg r6:V, reg r7:V, reg c2:L, reg file_exists:cls, reg f:*, reg f1:V, reg p:p(V +), reg r9:V, reg c3:L, reg f2:*, reg f3:V, reg f4:V, reg f5:V, reg Sys_getenv1:cls, reg r10:V, reg r11:V, reg c4:L, reg c6:V, reg file_exists1:cls, reg path_expand:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg c7:L, reg c8:V, reg c10:L, reg f6:*, reg f7:V, reg Sys_getenv2:cls, reg r15:V, reg r16:V, reg c11:L, reg c13:V, reg file_exists2:cls, reg path_expand1:cls, reg r17:V, reg p2:p(V +), reg r19:V, reg c14:L, reg c15:V, reg c17:L, reg f8:*, reg f9:V, reg file_exists3:cls, reg path_expand2:cls, reg r20:V, reg p3:p(V +), reg r22:V, reg c18:L, reg f10:*, reg f11:V, reg file_exists4:cls, reg path_expand3:cls, reg r23:V, reg p4:p(V +), reg r25:V, reg c19:L, reg f12:*, reg f13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r26:V, reg r27:V, reg Sys_getenv3:cls, reg r28:V, reg is_na1:cls, reg r29:V, reg r30:V, reg c20:L, reg file_exists5:cls, reg f15:*, reg f16:V, reg p5:p(V +), reg r32:V, reg c21:L, reg f17:*, reg f18:V, reg f19:V, reg file_exists6:cls, reg path_expand4:cls, reg paste0:cls, reg Sys_getenv4:cls, reg r33:V, reg p6:p(V +), reg r35:V, reg p7:p(V +), reg r37:V, reg p8:p(V +), reg r39:V, reg c22:L, reg f20:*, reg f21:V, reg file_exists7:cls, reg path_expand5:cls, reg r40:V, reg p9:p(V +), reg r42:V, reg c23:L, reg f22:*, reg f23:V, reg m:*, reg m1:V |
    mkenv;
    character = ldf character;
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
    r = dyn character();
    check L20() else D1();
  D1():
    deopt 2 [r];
  L20():
    st m = r;
    _Platform = ld `.Platform`;
    check L21() else D2();
  D2():
    deopt 4 [_Platform];
  L21():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c = `is.object`(_Platform1);
    if c then L23() else L24(_Platform1);
  L22(dx1):
    r2 = `==`(dx1, "windows");
    c1 = `as.logical`(r2);
    if c1 then L26() else L0();
  L23():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(_Platform3):
    r1 = `$`(_Platform3, <sym OS.type>);
    goto L22(r1);
  L0():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L68() else L69();
  L12():
    m = ld m;
    check L90() else D37();
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(dx);
  L26():
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  D37():
    deopt 109 [m];
  L1(r4):
    r7 = `!`(r4);
    c2 = `as.logical`(r7);
    if c2 then L32() else L2();
  L13(r27):
    r30 = `!`(r27);
    c20 = `as.logical`(r30);
    if c20 then L73() else L14();
  L27():
    Sys_getenv = ldf `Sys.getenv`;
    check L29() else D3();
  L28():
    r3 = dyn base(<lang `<-`(f, Sys.getenv("R_MAKEVARS_USER", NA_STR))>);
    goto L1(r3);
  L68():
    Sys_getenv3 = ldf `Sys.getenv`;
    check L70() else D25();
  L69():
    r26 = dyn base1(<lang `<-`(f, Sys.getenv("R_MAKEVARS_USER", NA_STR))>);
    goto L13(r26);
  L90():
    m1 = force? m;
    checkMissing(m1);
    popenv;
    return m1;
  D3():
    deopt 12 [];
  D25():
    deopt 76 [];
  L2():
    Sys_getenv1 = ldf `Sys.getenv`;
    check L39() else D9();
  L5(f5):
    goto L12();
  L14():
    file_exists6 = ldf `file.exists`;
    check L80() else D31();
  L29():
    r5 = dyn Sys_getenv("R_MAKEVARS_USER", NA_STR);
    check L30() else D4();
  L32():
    file_exists = ldf `file.exists`;
    check L33() else D6();
  L70():
    r28 = dyn Sys_getenv3("R_MAKEVARS_USER", NA_STR);
    check L71() else D26();
  L73():
    file_exists5 = ldf `file.exists`;
    check L74() else D28();
  D4():
    deopt 15 [r5];
  D6():
    deopt 21 [];
  D9():
    deopt 30 [];
  D26():
    deopt 79 [r28];
  D28():
    deopt 85 [];
  D31():
    deopt 94 [];
  L30():
    st f = r5;
    is_na = ldf `is.na` in base;
    r6 = dyn is_na(r5);
    check L31() else D5();
  L33():
    p = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r9 = dyn file_exists(p);
    check L34() else D7();
  L39():
    r10 = dyn Sys_getenv1("R_ARCH");
    check L40() else D10();
  L71():
    st f = r28;
    is_na1 = ldf `is.na` in base;
    r29 = dyn is_na1(r28);
    check L72() else D27();
  L74():
    p5 = prom<V +>{
      f15 = ld f;
      f16 = force? f15;
      checkMissing(f16);
      return f16;
    };
    r32 = dyn file_exists5(p5);
    check L75() else D29();
  L80():
    p8 = prom<V +>{
      path_expand4 = ldf `path.expand`;
      p7 = prom<V +>{
        paste0 = ldf paste0;
        p6 = prom<V +>{
          Sys_getenv4 = ldf `Sys.getenv`;
          r33 = dyn Sys_getenv4("R_PLATFORM");
          return r33;
        };
        r35 = dyn paste0("~/.R/Makevars-", p6);
        return r35;
      };
      r37 = dyn path_expand4(p7);
      st f = r37;
      invisible.0();
      return r37;
    };
    r39 = dyn file_exists6(p8);
    check L81() else D32();
  D5():
    deopt 18 [r6];
  D7():
    deopt 23 [r9];
  D10():
    deopt 32 [r10];
  D27():
    deopt 82 [r29];
  D29():
    deopt 87 [r32];
  D32():
    deopt 96 [r39];
  L31():
    goto L1(r6);
  L34():
    c3 = `as.logical`(r9);
    if c3 then L35() else L3();
  L40():
    r11 = `==`(r10, "/x64");
    c4 = `as.logical`(r11);
    if c4 then L41() else L6(c4);
  L72():
    goto L13(r29);
  L75():
    c21 = `as.logical`(r32);
    if c21 then L76() else L15();
  L81():
    c22 = `as.logical`(r39);
    if c22 then L82() else L17();
  L3():
    goto L4(NULL);
  L4(f4):
    goto L5(f4);
  L6(c6):
    c10 = `as.logical`(c6);
    if c10 then L45() else L7();
  L15():
    goto L16(NULL);
  L16(f19):
    goto L12();
  L17():
    file_exists7 = ldf `file.exists`;
    check L85() else D34();
  L35():
    f2 = ld f;
    check L36() else D8();
  L41():
    file_exists1 = ldf `file.exists`;
    check L42() else D11();
  L76():
    f17 = ld f;
    check L77() else D30();
  L82():
    f20 = ld f;
    check L83() else D33();
  D8():
    deopt 24 [f2];
  D11():
    deopt 36 [c4];
  D30():
    deopt 88 [f17];
  D33():
    deopt 97 [f20];
  D34():
    deopt 101 [];
  L7():
    Sys_getenv2 = ldf `Sys.getenv`;
    check L48() else D14();
  L36():
    f3 = force? f2;
    checkMissing(f3);
    st m = f3;
    goto L4(f3);
  L42():
    p1 = prom<V +>{
      path_expand = ldf `path.expand`;
      r12 = dyn path_expand("~/.R/Makevars.ucrt");
      st f = r12;
      invisible.0();
      return r12;
    };
    r14 = dyn file_exists1(p1);
    check L43() else D12();
  L45():
    f6 = ld f;
    check L46() else D13();
  L77():
    f18 = force? f17;
    checkMissing(f18);
    st m = f18;
    goto L16(f18);
  L83():
    f21 = force? f20;
    checkMissing(f21);
    st m = f21;
    goto L12();
  L85():
    p9 = prom<V +>{
      path_expand5 = ldf `path.expand`;
      r40 = dyn path_expand5("~/.R/Makevars");
      st f = r40;
      invisible.0();
      return r40;
    };
    r42 = dyn file_exists7(p9);
    check L86() else D35();
  D12():
    deopt 38 [c4, r14];
  D13():
    deopt 40 [f6];
  D14():
    deopt 44 [];
  D35():
    deopt 103 [r42];
  L43():
    c7 = `as.logical`(r14);
    c8 = `&&`(c4, c7);
    goto L6(c8);
  L46():
    f7 = force? f6;
    checkMissing(f7);
    st m = f7;
    goto L5(f7);
  L48():
    r15 = dyn Sys_getenv2("R_ARCH");
    check L49() else D15();
  L86():
    c23 = `as.logical`(r42);
    if c23 then L87() else L18();
  D15():
    deopt 46 [r15];
  L18():
    goto L12();
  L49():
    r16 = `==`(r15, "/x64");
    c11 = `as.logical`(r16);
    if c11 then L50() else L8(c11);
  L87():
    f22 = ld f;
    check L88() else D36();
  D36():
    deopt 104 [f22];
  L8(c13):
    c17 = `as.logical`(c13);
    if c17 then L54() else L9();
  L50():
    file_exists2 = ldf `file.exists`;
    check L51() else D16();
  L88():
    f23 = force? f22;
    checkMissing(f23);
    st m = f23;
    goto L12();
  D16():
    deopt 50 [c11];
  L9():
    file_exists3 = ldf `file.exists`;
    check L57() else D19();
  L51():
    p2 = prom<V +>{
      path_expand1 = ldf `path.expand`;
      r17 = dyn path_expand1("~/.R/Makevars.win64");
      st f = r17;
      invisible.0();
      return r17;
    };
    r19 = dyn file_exists2(p2);
    check L52() else D17();
  L54():
    f8 = ld f;
    check L55() else D18();
  D17():
    deopt 52 [c11, r19];
  D18():
    deopt 54 [f8];
  D19():
    deopt 58 [];
  L52():
    c14 = `as.logical`(r19);
    c15 = `&&`(c11, c14);
    goto L8(c15);
  L55():
    f9 = force? f8;
    checkMissing(f9);
    st m = f9;
    goto L5(f9);
  L57():
    p3 = prom<V +>{
      path_expand2 = ldf `path.expand`;
      r20 = dyn path_expand2("~/.R/Makevars.win");
      st f = r20;
      invisible.0();
      return r20;
    };
    r22 = dyn file_exists3(p3);
    check L58() else D20();
  D20():
    deopt 60 [r22];
  L58():
    c18 = `as.logical`(r22);
    if c18 then L59() else L10();
  L10():
    file_exists4 = ldf `file.exists`;
    check L62() else D22();
  L59():
    f10 = ld f;
    check L60() else D21();
  D21():
    deopt 61 [f10];
  D22():
    deopt 65 [];
  L60():
    f11 = force? f10;
    checkMissing(f11);
    st m = f11;
    goto L5(f11);
  L62():
    p4 = prom<V +>{
      path_expand3 = ldf `path.expand`;
      r23 = dyn path_expand3("~/.R/Makevars");
      st f = r23;
      invisible.0();
      return r23;
    };
    r25 = dyn file_exists4(p4);
    check L63() else D23();
  D23():
    deopt 67 [r25];
  L63():
    c19 = `as.logical`(r25);
    if c19 then L64() else L11();
  L11():
    goto L5(NULL);
  L64():
    f12 = ld f;
    check L65() else D24();
  D24():
    deopt 68 [f12];
  L65():
    f13 = force? f12;
    checkMissing(f13);
    st m = f13;
    goto L5(f13);
  }
}