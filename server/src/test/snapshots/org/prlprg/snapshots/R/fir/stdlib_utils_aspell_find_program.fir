fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3447149920;
    st aspell_find_program = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3447149920(program) {
  (reg program:*) -+> V { var program:*, reg program_isMissing:L, reg program_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg program1:*, reg program2:V, reg c:V, reg r2:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c6:L, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c9:L, reg r6:V, reg program3:*, reg program4:V, reg names:cls, reg r7:V, reg c10:V, reg r8:V, reg c11:L, reg c12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg program5:*, reg program6:V, reg c14:V, reg c15:L, reg getOption:cls, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg program7:*, reg program8:V, reg c16:V, reg c17:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r15:V, reg r16:V, reg c18:cls, reg r17:V, reg Filter:cls, reg nzchar:*, reg nzchar1:V, reg p:p(V +), reg Sys_which:cls, reg program9:*, reg program10:V, reg p1:p(V +), reg r21:V, reg p2:p(V +), reg r23:V, reg c19:L, reg r25:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r26:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg r28:V, reg program11:*, reg program12:V, reg is_na:cls, reg r29:V, reg r30:V, reg c20:L, reg c22:V, reg check:*, reg check1:V, reg c23:L, reg c24:V, reg c26:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r31:V, reg r32:V, reg system:cls, reg sprintf:cls, reg program13:*, reg program14:V, reg p3:p(V +), reg r34:V, reg p4:p(V +), reg r36:V, reg c27:cls, reg r37:V, reg c28:L, reg r39:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r40:V, reg grepl:cls, reg out:*, reg out1:V, reg p5:p(V +), reg r42:V, reg c29:L, reg l:*, reg names__:cls, reg r43:V, reg r44:S, reg grepl1:cls, reg out2:*, reg out3:V, reg p6:p(V +), reg r46:V, reg c30:L, reg l1:*, reg names__1:cls, reg r47:V, reg grepl2:cls, reg out4:*, reg out5:V, reg p7:p(V +), reg r49:V, reg c31:L, reg l2:*, reg names__2:cls, reg r50:V, reg l3:*, reg names__3:cls, reg r51:V, reg program15:*, reg program16:V |
    mkenv;
    program_isMissing = missing.0(program);
    if program_isMissing then L0(NULL) else L0(program);
  L0(program_orDefault):
    st program = program_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L1(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L2(c1) else L26();
  L23():
    program1 = ld program;
    check L25() else D0();
  L24():
    r = dyn base(<sym program>);
    goto L1(r);
  D0():
    deopt 1 [program1];
  L2(c2):
    st check = c2;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L25():
    program2 = force? program1;
    checkMissing(program2);
    c = `==`(program2, NULL);
    goto L1(c);
  L26():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L3(c6, r4):
    r8 = `!`(r4);
    c11 = `as.logical`(r8);
    c12 = `||`(c6, c11);
    goto L2(c12);
  L5(r10):
    c15 = `as.logical`(r10);
    if c15 then L37() else L6();
  L27():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L28():
    r3 = dyn base1(<lang names(program)>);
    goto L3(c1, r3);
  L34():
    program5 = ld program;
    check L36() else D3();
  L35():
    r9 = dyn base3(<sym program>);
    goto L5(r9);
  D3():
    deopt 17 [program5];
  L4(c9, r6):
    c10 = `==`(r6, NULL);
    goto L3(c9, c10);
  L6():
    goto L7();
  L7():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L29():
    program3 = ld program;
    check L31() else D1();
  L30():
    r5 = dyn base2(<sym program>);
    goto L4(c1, r5);
  L36():
    program6 = force? program5;
    checkMissing(program6);
    c14 = `==`(program6, NULL);
    goto L5(c14);
  L37():
    getOption = ldf getOption;
    check L38() else D4();
  D1():
    deopt 8 [c1, program3];
  D4():
    deopt 21 [];
  L8(r14):
    c17 = `as.logical`(r14);
    if c17 then L44() else L9();
  L31():
    program4 = force? program3;
    checkMissing(program4);
    names = ldf names in base;
    r7 = dyn names(program4);
    check L32() else D2();
  L38():
    r11 = dyn getOption("aspell_program");
    check L39() else D5();
  L41():
    program7 = ld program;
    check L43() else D6();
  L42():
    r13 = dyn base4(<sym program>);
    goto L8(r13);
  D2():
    deopt 11 [c1, r7];
  D5():
    deopt 23 [r11];
  D6():
    deopt 28 [program7];
  L9():
    goto L11();
  L11():
    Filter = ldf Filter;
    check L49() else D8();
  L32():
    goto L4(c1, r7);
  L39():
    st program = r11;
    goto L7();
  L43():
    program8 = force? program7;
    checkMissing(program8);
    c16 = `==`(program8, NULL);
    goto L8(c16);
  L44():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L45() else L46();
  D8():
    deopt 42 [];
  L10(r16):
    st program = r16;
    goto L11();
  L45():
    c18 = ldf c in base;
    r17 = dyn c18("aspell", "hunspell", "ispell");
    check L47() else D7();
  L46():
    r15 = dyn base5("aspell", "hunspell", "ispell");
    goto L10(r15);
  L49():
    p = prom<V +>{
      nzchar = ld nzchar;
      nzchar1 = force? nzchar;
      checkMissing(nzchar1);
      return nzchar1;
    };
    p2 = prom<V +>{
      Sys_which = ldf `Sys.which`;
      p1 = prom<V +>{
        program9 = ld program;
        program10 = force? program9;
        checkMissing(program10);
        return program10;
      };
      r21 = dyn Sys_which(p1);
      return r21;
    };
    r23 = dyn Filter(p, p2);
    check L50() else D9();
  D7():
    deopt 37 [r17];
  D9():
    deopt 45 [r23];
  L47():
    goto L10(r17);
  L50():
    c19 = `is.object`(r23);
    if c19 then L51() else L52(r23);
  L12(dx1):
    st program = dx1;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L54() else L55();
  L51():
    dr = tryDispatchBuiltin.1("[", r23);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L53() else L52(dr);
  L52(r25):
    __ = ldf `[` in base;
    r26 = dyn __(r25, 1);
    goto L12(r26);
  L13(r28):
    r30 = `!`(r28);
    c20 = `as.logical`(r30);
    if c20 then L58() else L14(c20);
  L53():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L54():
    program11 = ld program;
    check L56() else D10();
  L55():
    r27 = dyn base6(<sym program>);
    goto L13(r27);
  D10():
    deopt 52 [program11];
  L14(c22):
    c26 = `as.logical`(c22);
    if c26 then L61() else L15();
  L56():
    program12 = force? program11;
    checkMissing(program12);
    is_na = ldf `is.na` in base;
    r29 = dyn is_na(program12);
    check L57() else D11();
  L58():
    check = ld check;
    check L59() else D12();
  D11():
    deopt 55 [r29];
  D12():
    deopt 57 [c20, check];
  L15():
    goto L22();
  L22():
    program15 = ld program;
    check L91() else D30();
  L57():
    goto L13(r29);
  L59():
    check1 = force? check;
    checkMissing(check1);
    c23 = `as.logical`(check1);
    c24 = `&&`(c20, c23);
    goto L14(c24);
  L61():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L62() else L63();
  D30():
    deopt 120 [program15];
  L16(r32):
    c28 = `is.object`(r32);
    if c28 then L67() else L68(r32);
  L62():
    system = ldf system;
    check L64() else D13();
  L63():
    r31 = dyn base7(<lang system(sprintf("%s -v", program), intern=TRUE)>, "");
    goto L16(r31);
  L91():
    program16 = force? program15;
    checkMissing(program16);
    popenv;
    return program16;
  D13():
    deopt 63 [];
  L17(dx3):
    st out = dx3;
    grepl = ldf grepl;
    check L70() else D16();
  L64():
    p4 = prom<V +>{
      sprintf = ldf sprintf;
      p3 = prom<V +>{
        program13 = ld program;
        program14 = force? program13;
        checkMissing(program14);
        return program14;
      };
      r34 = dyn sprintf("%s -v", p3);
      return r34;
    };
    r36 = dyn system[, intern](p4, TRUE);
    check L65() else D14();
  L67():
    dr2 = tryDispatchBuiltin.1("[", r32);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L69() else L68(dr2);
  L68(r39):
    __1 = ldf `[` in base;
    r40 = dyn __1(r39, 1);
    goto L17(r40);
  D14():
    deopt 67 [r36];
  D16():
    deopt 76 [];
  L65():
    c27 = ldf c in base;
    r37 = dyn c27(r36, "");
    check L66() else D15();
  L69():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L70():
    p5 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r42 = dyn grepl("really Aspell", p5);
    check L71() else D17();
  D15():
    deopt 70 [r37];
  D17():
    deopt 79 [r42];
  L66():
    goto L16(r37);
  L71():
    c29 = `as.logical`(r42);
    if c29 then L72() else L18();
  L18():
    grepl1 = ldf grepl;
    check L76() else D20();
  L19(r44):
    goto L22();
  L72():
    l = ld program;
    names__ = ldf `names<-`;
    check L73() else D18();
  D18():
    deopt 83 ["aspell", l, "aspell"];
  D20():
    deopt 88 [];
  L73():
    r43 = dyn names__(l, NULL, "aspell");
    check L74() else D19();
  L76():
    p6 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r46 = dyn grepl1("really Hunspell", p6);
    check L77() else D21();
  D19():
    deopt 85 ["aspell", r43];
  D21():
    deopt 91 [r46];
  L74():
    st program = r43;
    goto L19("aspell");
  L77():
    c30 = `as.logical`(r46);
    if c30 then L78() else L20();
  L20():
    grepl2 = ldf grepl;
    check L82() else D24();
  L78():
    l1 = ld program;
    names__1 = ldf `names<-`;
    check L79() else D22();
  D22():
    deopt 95 ["hunspell", l1, "hunspell"];
  D24():
    deopt 100 [];
  L79():
    r47 = dyn names__1(l1, NULL, "hunspell");
    check L80() else D23();
  L82():
    p7 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      return out5;
    };
    r49 = dyn grepl2("International Ispell", p7);
    check L83() else D25();
  D23():
    deopt 97 ["hunspell", r47];
  D25():
    deopt 103 [r49];
  L80():
    st program = r47;
    goto L19("hunspell");
  L83():
    c31 = `as.logical`(r49);
    if c31 then L84() else L21();
  L21():
    l3 = ld program;
    names__3 = ldf `names<-`;
    check L88() else D28();
  L84():
    l2 = ld program;
    names__2 = ldf `names<-`;
    check L85() else D26();
  D26():
    deopt 107 ["ispell", l2, "ispell"];
  D28():
    deopt 114 [NA_STR, l3, NA_STR];
  L85():
    r50 = dyn names__2(l2, NULL, "ispell");
    check L86() else D27();
  L88():
    r51 = dyn names__3(l3, NULL, NA_STR);
    check L89() else D29();
  D27():
    deopt 109 ["ispell", r50];
  D29():
    deopt 116 [NA_STR, r51];
  L86():
    st program = r50;
    goto L19("ispell");
  L89():
    st program = r51;
    goto L19(NA_STR);
  }
}