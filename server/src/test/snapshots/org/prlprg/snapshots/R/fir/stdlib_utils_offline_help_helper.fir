fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2234780469;
    st offline_help_helper = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2234780469(texfile, type, texinputs) {
  (reg texfile:*, reg type:*, reg texinputs:*) -+> V { var texfile:*, var type:*, var texinputs:*, reg texinputs_isMissing:L, reg texinputs_orDefault:*, reg tempfile:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg on_exit:cls, reg r3:V, reg file_copy:cls, reg texfile1:*, reg texfile2:V, reg p:p(V +), reg tf:*, reg tf1:V, reg p1:p(V +), reg r6:V, reg __:cls, reg r7:V, reg r8:cls, reg tf2:*, reg tf3:V, reg p2:p(V +), reg texinputs1:*, reg texinputs2:V, reg p3:p(V +), reg r11:V, reg sub:cls, reg tf4:*, reg tf5:V, reg p4:p(V +), reg r13:V, reg sub1:cls, reg texfile3:*, reg texfile4:V, reg p5:p(V +), reg r15:V, reg file_exists:cls, reg ofile:*, reg ofile1:V, reg p6:p(V +), reg r17:V, reg r18:V, reg c:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg ofile2:*, reg ofile3:V, reg p7:p(V +), reg r20:V, reg p8:p(V +), reg r22:V, reg p9:p(V +), reg r24:V, reg file_copy1:cls, reg ofile4:*, reg ofile5:V, reg p10:p(V +), reg ofile6:*, reg ofile7:V, reg p11:p(V +), reg r28:V, reg c1:L, reg unlink:cls, reg ofile8:*, reg ofile9:V, reg p12:p(V +), reg r30:V, reg message:cls, reg gettextf1:cls, reg sQuote1:cls, reg basename:cls, reg ofile10:*, reg ofile11:V, reg p13:p(V +), reg r32:V, reg p14:p(V +), reg r34:V, reg p15:p(V +), reg r36:V, reg p16:p(V +), reg r38:V, reg message1:cls, reg gettextf2:cls, reg sQuote2:cls, reg ofile12:*, reg ofile13:V, reg p17:p(V +), reg r41:V, reg p18:p(V +), reg r43:V, reg p19:p(V +), reg r45:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r46:V, reg r47:V, reg invisible:cls, reg r48:V |
    mkenv;
    st texfile = texfile;
    st type = type;
    texinputs_isMissing = missing.0(texinputs);
    if texinputs_isMissing then L0(NULL) else L0(texinputs);
  L0(texinputs_orDefault):
    st texinputs = texinputs_orDefault;
    tempfile = ldf tempfile;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    r = dyn tempfile[, tmpdir, fileext]("tex", ".", ".tex");
    check L8() else D1();
  D1():
    deopt 7 [r];
  L8():
    st tf = r;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1():
    file_copy = ldf `file.copy`;
    check L11() else D2();
  L9():
    on_exit = ldf `on.exit` in base;
    r3 = dyn on_exit(<lang unlink(tf)>);
    goto L1();
  L10():
    r1 = dyn base(<lang unlink(tf)>);
    goto L1();
  D2():
    deopt 13 [];
  L11():
    p = prom<V +>{
      texfile1 = ld texfile;
      texfile2 = force? texfile1;
      checkMissing(texfile2);
      return texfile2;
    };
    p1 = prom<V +>{
      tf = ld tf;
      tf1 = force? tf;
      checkMissing(tf1);
      return tf1;
    };
    r6 = dyn file_copy(p, p1);
    check L12() else D3();
  D3():
    deopt 16 [r6];
  L12():
    __ = ldf `::`;
    check L13() else D4();
  D4():
    deopt 18 [];
  L13():
    r7 = dyn __("tools", "texi2pdf");
    check L14() else D5();
  D5():
    deopt 21 [r7];
  L14():
    checkFun.0(r7);
    r8 = r7 as cls;
    p2 = prom<V +>{
      tf2 = ld tf;
      tf3 = force? tf2;
      checkMissing(tf3);
      return tf3;
    };
    p3 = prom<V +>{
      texinputs1 = ld texinputs;
      texinputs2 = force? texinputs1;
      checkMissing(texinputs2);
      return texinputs2;
    };
    r11 = dyn r8[, clean, texinputs](p2, TRUE, p3);
    check L15() else D6();
  D6():
    deopt 28 [r11];
  L15():
    sub = ldf sub;
    check L16() else D7();
  D7():
    deopt 30 [];
  L16():
    p4 = prom<V +>{
      tf4 = ld tf;
      tf5 = force? tf4;
      checkMissing(tf5);
      return tf5;
    };
    r13 = dyn sub("tex$", "pdf", p4);
    check L17() else D8();
  D8():
    deopt 34 [r13];
  L17():
    st ofile = r13;
    sub1 = ldf sub;
    check L18() else D9();
  D9():
    deopt 37 [];
  L18():
    p5 = prom<V +>{
      texfile3 = ld texfile;
      texfile4 = force? texfile3;
      checkMissing(texfile4);
      return texfile4;
    };
    r15 = dyn sub1("tex$", "pdf", p5);
    check L19() else D10();
  D10():
    deopt 41 [r15];
  L19():
    st ofile2 = r15;
    file_exists = ldf `file.exists`;
    check L20() else D11();
  D11():
    deopt 44 [];
  L20():
    p6 = prom<V +>{
      ofile = ld ofile;
      ofile1 = force? ofile;
      checkMissing(ofile1);
      return ofile1;
    };
    r17 = dyn file_exists(p6);
    check L21() else D12();
  D12():
    deopt 46 [r17];
  L21():
    r18 = `!`(r17);
    c = `as.logical`(r18);
    if c then L22() else L2();
  L2():
    goto L3();
  L3():
    file_copy1 = ldf `file.copy`;
    check L26() else D15();
  L22():
    stop = ldf stop;
    check L23() else D13();
  D13():
    deopt 49 [];
  D15():
    deopt 57 [];
  L23():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p8 = prom<V +>{
        sQuote = ldf sQuote;
        p7 = prom<V +>{
          ofile2 = ld ofile2;
          ofile3 = force? ofile2;
          checkMissing(ofile3);
          return ofile3;
        };
        r20 = dyn sQuote(p7);
        return r20;
      };
      r22 = dyn gettextf("creation of %s failed", p8);
      return r22;
    };
    r24 = dyn stop[, domain](p9, NA_LGL);
    check L24() else D14();
  L26():
    p10 = prom<V +>{
      ofile4 = ld ofile;
      ofile5 = force? ofile4;
      checkMissing(ofile5);
      return ofile5;
    };
    p11 = prom<V +>{
      ofile6 = ld ofile2;
      ofile7 = force? ofile6;
      checkMissing(ofile7);
      return ofile7;
    };
    r28 = dyn file_copy1[, , overwrite](p10, p11, TRUE);
    check L27() else D16();
  D14():
    deopt 53 [r24];
  D16():
    deopt 62 [r28];
  L24():
    goto L3();
  L27():
    c1 = `as.logical`(r28);
    if c1 then L28() else L4();
  L4():
    message1 = ldf message;
    check L34() else D21();
  L5():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L28():
    unlink = ldf unlink;
    check L29() else D17();
  D17():
    deopt 64 [];
  D21():
    deopt 74 [];
  L6(r47):
    popenv;
    return r47;
  L29():
    p12 = prom<V +>{
      ofile8 = ld ofile;
      ofile9 = force? ofile8;
      checkMissing(ofile9);
      return ofile9;
    };
    r30 = dyn unlink(p12);
    check L30() else D18();
  L34():
    p19 = prom<V +>{
      gettextf2 = ldf gettextf;
      p18 = prom<V +>{
        sQuote2 = ldf sQuote;
        p17 = prom<V +>{
          ofile12 = ld ofile;
          ofile13 = force? ofile12;
          checkMissing(ofile13);
          return ofile13;
        };
        r41 = dyn sQuote2(p17);
        return r41;
      };
      r43 = dyn gettextf2("Saving help page to %s", p18);
      return r43;
    };
    r45 = dyn message1[, domain](p19, NA_LGL);
    check L35() else D22();
  L36():
    invisible = ldf invisible in base;
    r48 = dyn invisible();
    check L38() else D23();
  L37():
    r46 = dyn base1();
    goto L6(r46);
  D18():
    deopt 66 [r30];
  D22():
    deopt 78 [r45];
  D23():
    deopt 82 [r48];
  L30():
    message = ldf message;
    check L31() else D19();
  L35():
    goto L5();
  L38():
    goto L6(r48);
  D19():
    deopt 68 [];
  L31():
    p16 = prom<V +>{
      gettextf1 = ldf gettextf;
      p15 = prom<V +>{
        sQuote1 = ldf sQuote;
        p14 = prom<V +>{
          basename = ldf basename;
          p13 = prom<V +>{
            ofile10 = ld ofile2;
            ofile11 = force? ofile10;
            checkMissing(ofile11);
            return ofile11;
          };
          r32 = dyn basename(p13);
          return r32;
        };
        r34 = dyn sQuote1(p14);
        return r34;
      };
      r36 = dyn gettextf1("Saving help page to %s", p15);
      return r36;
    };
    r38 = dyn message[, domain](p16, NA_LGL);
    check L32() else D20();
  D20():
    deopt 72 [r38];
  L32():
    goto L5();
  }
}