fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner725910232;
    st `.license_component_is_for_stub_and_ok` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner725910232(com, dir) {
  (reg com:*, reg dir:*) -+> V { var com:*, var dir:*, reg unlist:cls, reg strsplit:cls, reg com1:*, reg com2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg c:cls, reg r12:V, reg list:cls, reg r13:V, reg rep_int:cls, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg r18:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r19:V, reg r20:V, reg c1:cls, reg r21:V, reg list1:cls, reg r22:V, reg rep_int1:cls, reg r23:V, reg c2:cls, reg r24:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r25:V, reg r26:V, reg c3:cls, reg r27:V, reg l:*, reg names__:cls, reg r28:V, reg fields_for_stubs:*, reg fields_for_stubs1:V, reg c4:L, reg fields_for_stubs3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg parts:*, reg parts1:V, reg c5:L, reg fields_for_stubs5:V, reg parts3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg fields_for_stubs7:V, reg dx3:V, reg __:cls, reg r29:V, reg __1:cls, reg r30:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r31:V, reg r32:V, reg fields_to_have:*, reg fields_to_have1:V, reg c6:V, reg c7:L, reg tryCatch:cls, reg read_dcf:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg parts4:*, reg parts5:V, reg c8:L, reg parts7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r36:V, reg p3:p(V +), reg r38:V, reg p4:p(V +), reg r40:V, reg p5:p(V +), reg identity:*, reg identity1:V, reg p6:p(V +), reg r43:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r44:V, reg r45:V, reg fields:*, reg fields1:V, reg inherits:cls, reg r46:V, reg c9:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r49:V, reg r50:V, reg sort:cls, reg colnames:cls, reg fields2:*, reg fields3:V, reg p7:p(V +), reg r52:V, reg p8:p(V +), reg r54:V, reg sort1:cls, reg fields_to_have2:*, reg fields_to_have3:V, reg p9:p(V +), reg r56:V, reg identical:cls, reg r57:V, reg r58:V, reg c10:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r61:V, reg r62:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r63:V, reg r64:V, reg fields4:*, reg fields5:V, reg is_na:cls, reg r65:V, reg r66:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r69:V, reg r70:V, reg r71:V, reg fields6:*, reg fields7:V, reg nzchar:cls, reg r72:V, reg r73:V, reg all:cls, reg r74:V, reg r75:V, reg c11:L |
    mkenv;
    st com = com;
    st dir = dir;
    unlist = ldf unlist;
    check L24() else D0();
  D0():
    deopt 1 [];
  L24():
    p1 = prom<V +>{
      strsplit = ldf strsplit;
      p = prom<V +>{
        com1 = ld com;
        com2 = force? com1;
        checkMissing(com2);
        return com2;
      };
      r1 = dyn strsplit(p, "[[:space:]]*\\+[[:space:]]*file *");
      return r1;
    };
    r3 = dyn unlist(p1);
    check L25() else D1();
  D1():
    deopt 3 [r3];
  L25():
    st parts = r3;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L0(r5):
    st fields_for_stubs = r5;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L47() else L48();
  L26():
    sym1 = ldf `rep.int`;
    base1 = ldf `rep.int` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L27():
    r4 = dyn base(<lang rep.int(list(c("YEAR", "COPYRIGHT HOLDER")), 4)>, <lang rep.int(list(c("YEAR", "COPYRIGHT HOLDER", "ORGANIZATION")), 2)>);
    goto L0(r4);
  L1(r7):
    sym4 = ldf `rep.int`;
    base4 = ldf `rep.int` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L7(r26):
    l = ld fields_for_stubs;
    names__ = ldf `names<-`;
    check L50() else D10();
  L28():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L29():
    r6 = dyn base1(<lang list(c("YEAR", "COPYRIGHT HOLDER"))>, 4);
    goto L1(r6);
  L47():
    c3 = ldf c in base;
    r27 = dyn c3("MIT License", "MIT", "BSD 2-clause License", "BSD_2_clause", "BSD 3-clause License", "BSD_3_clause");
    check L49() else D9();
  L48():
    r25 = dyn base7("MIT License", "MIT", "BSD 2-clause License", "BSD_2_clause", "BSD 3-clause License", "BSD_3_clause");
    goto L7(r25);
  D9():
    deopt 50 [r27];
  D10():
    deopt 52 [r26, l, r26];
  L2(r9):
    rep_int = ldf `rep.int` in base;
    r14 = dyn rep_int(r9, 4);
    check L36() else D4();
  L4(r16):
    c2 = ldf c in base;
    r24 = dyn c2(r7, r16);
    check L46() else D8();
  L30():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L31():
    r8 = dyn base2(<lang c("YEAR", "COPYRIGHT HOLDER")>);
    goto L2(r8);
  L37():
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L39() else L40();
  L38():
    r15 = dyn base4(<lang list(c("YEAR", "COPYRIGHT HOLDER", "ORGANIZATION"))>, 2);
    goto L4(r15);
  L49():
    goto L7(r27);
  L50():
    r28 = dyn names__(l, NULL, r26);
    check L51() else D11();
  D4():
    deopt 21 [r14];
  D8():
    deopt 39 [r24];
  D11():
    deopt 54 [r26, r28];
  L3(r11):
    list = ldf list in base;
    r13 = dyn list(r11);
    check L35() else D3();
  L5(r18):
    rep_int1 = ldf `rep.int` in base;
    r23 = dyn rep_int1(r18, 2);
    check L45() else D7();
  L32():
    c = ldf c in base;
    r12 = dyn c("YEAR", "COPYRIGHT HOLDER");
    check L34() else D2();
  L33():
    r10 = dyn base3("YEAR", "COPYRIGHT HOLDER");
    goto L3(r10);
  L36():
    goto L1(r14);
  L39():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L41() else L42();
  L40():
    r17 = dyn base5(<lang c("YEAR", "COPYRIGHT HOLDER", "ORGANIZATION")>);
    goto L5(r17);
  L46():
    goto L0(r24);
  L51():
    st fields_for_stubs = r28;
    fields_for_stubs = ld fields_for_stubs;
    check L52() else D12();
  D2():
    deopt 16 [r12];
  D3():
    deopt 18 [r13];
  D7():
    deopt 37 [r23];
  D12():
    deopt 56 [fields_for_stubs];
  L6(r20):
    list1 = ldf list in base;
    r22 = dyn list1(r20);
    check L44() else D6();
  L34():
    goto L3(r12);
  L35():
    goto L2(r13);
  L41():
    c1 = ldf c in base;
    r21 = dyn c1("YEAR", "COPYRIGHT HOLDER", "ORGANIZATION");
    check L43() else D5();
  L42():
    r19 = dyn base6("YEAR", "COPYRIGHT HOLDER", "ORGANIZATION");
    goto L6(r19);
  L45():
    goto L4(r23);
  L52():
    fields_for_stubs1 = force? fields_for_stubs;
    checkMissing(fields_for_stubs1);
    c4 = `is.object`(fields_for_stubs1);
    if c4 then L53() else L54(fields_for_stubs1);
  D5():
    deopt 32 [r21];
  D6():
    deopt 34 [r22];
  L8(dx1):
    st fields_to_have = dx1;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L60() else L61();
  L43():
    goto L6(r21);
  L44():
    goto L5(r22);
  L53():
    dr = tryDispatchBuiltin.1("[[", fields_for_stubs1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L55() else L54(dr);
  L54(fields_for_stubs3):
    parts = ld parts;
    check L56() else D13();
  D13():
    deopt 58 [fields_for_stubs3, parts];
  L10(r32):
    c7 = `as.logical`(r32);
    if c7 then L63() else L11();
  L55():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L56():
    parts1 = force? parts;
    checkMissing(parts1);
    c5 = `is.object`(parts1);
    if c5 then L57() else L58(fields_for_stubs3, parts1);
  L60():
    fields_to_have = ld fields_to_have;
    check L62() else D14();
  L61():
    r31 = dyn base8(<sym fields_to_have>);
    goto L10(r31);
  D14():
    deopt 66 [fields_to_have];
  L9(fields_for_stubs7, dx3):
    __1 = ldf `[[` in base;
    r30 = dyn __1(fields_for_stubs7, dx3);
    goto L8(r30);
  L11():
    tryCatch = ldf tryCatch;
    check L66() else D15();
  L57():
    dr2 = tryDispatchBuiltin.1("[", parts1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L59() else L58(fields_for_stubs3, dr2);
  L58(fields_for_stubs5, parts3):
    __ = ldf `[` in base;
    r29 = dyn __(parts3, 1);
    goto L9(fields_for_stubs5, r29);
  L62():
    fields_to_have1 = force? fields_to_have;
    checkMissing(fields_to_have1);
    c6 = `==`(fields_to_have1, NULL);
    goto L10(c6);
  L63():
    popenv;
    return 1;
  D15():
    deopt 75 [];
  L59():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(fields_for_stubs3, dx2);
  L66():
    p5 = prom<V +>{
      read_dcf = ldf `read.dcf`;
      p4 = prom<V +>{
        file_path = ldf `file.path`;
        p2 = prom<V +>{
          dir1 = ld dir;
          dir2 = force? dir1;
          checkMissing(dir2);
          return dir2;
        };
        p3 = prom<V +>{
          parts4 = ld parts;
          parts5 = force? parts4;
          checkMissing(parts5);
          c8 = `is.object`(parts5);
          if c8 then L1() else L2(parts5);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("[", parts5);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(parts7):
          __2 = ldf `[` in base;
          r36 = dyn __2(parts7, 2);
          goto L0(r36);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r38 = dyn file_path(p2, p3);
        return r38;
      };
      r40 = dyn read_dcf(p4);
      return r40;
    };
    p6 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r43 = dyn tryCatch[, error](p5, p6);
    check L67() else D16();
  D16():
    deopt 79 [r43];
  L67():
    st fields = r43;
    sym9 = ldf inherits;
    base9 = ldf inherits in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L68() else L69();
  L13(r45):
    c9 = `as.logical`(r45);
    if c9 then L72() else L14();
  L68():
    fields = ld fields;
    check L70() else D17();
  L69():
    r44 = dyn base9(<sym fields>, "error");
    goto L13(r44);
  D17():
    deopt 83 [fields];
  L14():
    sym10 = ldf identical;
    base10 = ldf identical in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L75() else L76();
  L70():
    fields1 = force? fields;
    checkMissing(fields1);
    inherits = ldf inherits in base;
    r46 = dyn inherits(fields1, "error", FALSE);
    check L71() else D18();
  L72():
    popenv;
    return 2;
  D18():
    deopt 88 [r46];
  L16(r50):
    r58 = `!`(r50);
    c10 = `as.logical`(r58);
    if c10 then L82() else L17();
  L71():
    goto L13(r46);
  L75():
    sort = ldf sort;
    check L77() else D19();
  L76():
    r49 = dyn base10(<lang sort(colnames(fields))>, <lang sort(fields_to_have)>);
    goto L16(r49);
  D19():
    deopt 97 [];
  L17():
    sym11 = ldf all;
    base11 = ldf all in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L85() else L86();
  L77():
    p8 = prom<V +>{
      colnames = ldf colnames;
      p7 = prom<V +>{
        fields2 = ld fields;
        fields3 = force? fields2;
        checkMissing(fields3);
        return fields3;
      };
      r52 = dyn colnames(p7);
      return r52;
    };
    r54 = dyn sort(p8);
    check L78() else D20();
  L82():
    popenv;
    return 3;
  D20():
    deopt 99 [r54];
  L19(r62):
    r75 = `!`(r62);
    c11 = `as.logical`(r75);
    if c11 then L96() else L22();
  L78():
    sort1 = ldf sort;
    check L79() else D21();
  L85():
    sym12 = ldf `is.na`;
    base12 = ldf `is.na` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L87() else L88();
  L86():
    r61 = dyn base11(<lang `&`(`!`(is.na(fields)), nzchar(fields))>);
    goto L19(r61);
  D21():
    deopt 101 [];
  L20(r64):
    r66 = `!`(r64);
    sym13 = ldf nzchar;
    base13 = ldf nzchar in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L91() else L92();
  L22():
    popenv;
    return 0;
  L79():
    p9 = prom<V +>{
      fields_to_have2 = ld fields_to_have;
      fields_to_have3 = force? fields_to_have2;
      checkMissing(fields_to_have3);
      return fields_to_have3;
    };
    r56 = dyn sort1(p9);
    check L80() else D22();
  L87():
    fields4 = ld fields;
    check L89() else D24();
  L88():
    r63 = dyn base12(<sym fields>);
    goto L20(r63);
  L96():
    popenv;
    return 4;
  D22():
    deopt 103 [r56];
  D24():
    deopt 123 [fields4];
  L21(r70, r71):
    r73 = `&&`(r70, r71);
    all = ldf all in base;
    r74 = dyn all(r73);
    check L95() else D28();
  L80():
    identical = ldf identical in base;
    r57 = dyn identical(r54, r56, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L81() else D23();
  L89():
    fields5 = force? fields4;
    checkMissing(fields5);
    is_na = ldf `is.na` in base;
    r65 = dyn is_na(fields5);
    check L90() else D25();
  L91():
    fields6 = ld fields;
    check L93() else D26();
  L92():
    r69 = dyn base13(<sym fields>);
    goto L21(r66, r69);
  D23():
    deopt 112 [r57];
  D25():
    deopt 126 [r65];
  D26():
    deopt 129 [r66, fields6];
  D28():
    deopt 135 [r74];
  L81():
    goto L16(r57);
  L90():
    goto L20(r65);
  L93():
    fields7 = force? fields6;
    checkMissing(fields7);
    nzchar = ldf nzchar in base;
    r72 = dyn nzchar(fields7);
    check L94() else D27();
  L95():
    goto L19(r74);
  D27():
    deopt 132 [r66, r72];
  L94():
    goto L21(r66, r72);
  }
}