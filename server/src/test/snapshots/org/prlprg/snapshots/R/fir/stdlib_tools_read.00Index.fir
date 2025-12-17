fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner270641308;
    st `read.00Index` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner270641308(file) {
  (reg file:*) -+> V { var file:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg file1:*, reg file2:V, reg c:L, reg c1:L, reg file3:*, reg file4:V, reg r2:V, reg c2:L, reg stdin:cls, reg r3:V, reg r4:V, reg file5:cls, reg file6:*, reg file7:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg on_exit:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg file8:*, reg file9:V, reg inherits:cls, reg r12:V, reg r13:V, reg c3:L, reg stop:cls, reg gettextf:cls, reg file10:*, reg file11:V, reg p1:p(V +), reg r15:V, reg p2:p(V +), reg r17:V, reg matrix:cls, reg r19:V, reg paste:cls, reg readLines:cls, reg file12:*, reg file13:V, reg p3:p(V +), reg r21:V, reg p4:p(V +), reg r23:V, reg unlist:cls, reg strsplit:cls, reg x:*, reg x1:V, reg p5:p(V +), reg r25:V, reg p6:p(V +), reg r27:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x2:V, reg tryCatch:cls, reg grepl:cls, reg chunk:*, reg chunk1:V, reg p7:p(V +), reg r29:V, reg r30:V, reg c5:L, reg gsub:cls, reg chunk2:*, reg chunk3:V, reg p8:p(V +), reg r32:V, reg strsplit1:cls, reg unlist1:cls, reg strsplit2:cls, reg chunk4:*, reg chunk5:V, reg p9:p(V +), reg r34:V, reg p10:p(V +), reg r36:V, reg p11:p(V +), reg r38:V, reg cbind:cls, reg unlist2:cls, reg lapply:cls, reg x3:*, reg x4:V, reg p12:p(V +), reg __:*, reg __1:V, reg p13:p(V +), reg r41:V, reg p14:p(V +), reg r43:V, reg p15:p(V +), reg unlist3:cls, reg lapply1:cls, reg x5:*, reg x6:V, reg p16:p(V +), reg r46:cls, reg p17:p(V +), reg r48:V, reg p18:p(V +), reg r50:V, reg p19:p(V +), reg r52:V, reg p20:p(V +), reg identity:*, reg identity1:V, reg p21:p(V +), reg r55:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r56:V, reg i7:I, reg r57:V, reg entries:*, reg entries1:V, reg inherits1:cls, reg r58:V, reg r59:V, reg c6:L, reg i9:I, reg c8:V, reg NCOL:cls, reg entries2:*, reg entries3:V, reg p22:p(V +), reg r61:V, reg r62:V, reg c9:L, reg c10:V, reg c12:L, reg rbind:cls, reg y:*, reg y1:V, reg p23:p(V +), reg entries4:*, reg entries5:V, reg p24:p(V +), reg r65:V, reg i13:I, reg sym4:cls, reg base4:cls, reg guard4:L, reg r67:V, reg r68:V, reg c13:cls, reg r69:V, reg l1:*, reg colnames__:cls, reg r70:V, reg y2:*, reg y3:V |
    mkenv;
    st file = file;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L18() else L1();
  L15():
    file1 = ld file;
    check L17() else D0();
  L16():
    r = dyn base(<sym file>);
    goto L0(r);
  D0():
    deopt 1 [file1];
  L1():
    goto L4();
  L4():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L17():
    file2 = force? file1;
    checkMissing(file2);
    c = `is.character`(file2);
    goto L0(c);
  L18():
    file3 = ld file;
    check L19() else D1();
  D1():
    deopt 4 [file3];
  L5(r11):
    r13 = `!`(r11);
    c3 = `as.logical`(r13);
    if c3 then L33() else L6();
  L19():
    file4 = force? file3;
    checkMissing(file4);
    r2 = `==`(file4, "");
    c2 = `as.logical`(r2);
    if c2 then L20() else L2();
  L29():
    file8 = ld file;
    check L31() else D6();
  L30():
    r10 = dyn base2(<sym file>, "connection");
    goto L5(r10);
  D6():
    deopt 25 [file8];
  L2():
    file5 = ldf file;
    check L24() else D4();
  L3(r4):
    goto L4();
  L6():
    goto L7();
  L7():
    matrix = ldf matrix;
    check L37() else D10();
  L20():
    stdin = ldf stdin;
    check L21() else D2();
  L31():
    file9 = force? file8;
    checkMissing(file9);
    inherits = ldf inherits in base;
    r12 = dyn inherits(file9, "connection", FALSE);
    check L32() else D7();
  L33():
    stop = ldf stop;
    check L34() else D8();
  D2():
    deopt 9 [];
  D4():
    deopt 13 [];
  D7():
    deopt 30 [r12];
  D8():
    deopt 33 [];
  D10():
    deopt 41 [];
  L21():
    r3 = dyn stdin();
    check L22() else D3();
  L24():
    p = prom<V +>{
      file6 = ld file;
      file7 = force? file6;
      checkMissing(file7);
      return file7;
    };
    r6 = dyn file5(p, "r");
    check L25() else D5();
  L32():
    goto L5(r12);
  L34():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        file10 = ld file;
        file11 = force? file10;
        checkMissing(file11);
        return file11;
      };
      r15 = dyn gettextf("argument '%s' must be a character string or connection", p1);
      return r15;
    };
    r17 = dyn stop[, domain](p2, NA_LGL);
    check L35() else D9();
  L37():
    r19 = dyn matrix[, nrow, ncol]("", 0, 2);
    check L38() else D11();
  D3():
    deopt 10 [r3];
  D5():
    deopt 16 [r6];
  D9():
    deopt 37 [r17];
  D11():
    deopt 47 [r19];
  L22():
    st file = r3;
    goto L3(r3);
  L25():
    st file = r6;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L35():
    goto L7();
  L38():
    st y = r19;
    paste = ldf paste;
    check L39() else D12();
  D12():
    deopt 50 [];
  L26():
    on_exit = ldf `on.exit` in base;
    r8 = dyn on_exit(<lang close(file)>);
    goto L3(r8);
  L27():
    r7 = dyn base1(<lang close(file)>);
    goto L3(r7);
  L39():
    p4 = prom<V +>{
      readLines = ldf readLines;
      p3 = prom<V +>{
        file12 = ld file;
        file13 = force? file12;
        checkMissing(file13);
        return file13;
      };
      r21 = dyn readLines(p3);
      return r21;
    };
    r23 = dyn paste[, collapse](p4, "\n");
    check L40() else D13();
  D13():
    deopt 54 [r23];
  L40():
    st x = r23;
    unlist = ldf unlist;
    check L41() else D14();
  D14():
    deopt 57 [];
  L41():
    p6 = prom<V +>{
      strsplit = ldf strsplit;
      p5 = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      r25 = dyn strsplit(p5, "\n[ \t\n]*\n");
      return r25;
    };
    r27 = dyn unlist(p6);
    check L42() else D15();
  D15():
    deopt 59 [r27];
  L42():
    s = toForSeq(r27);
    l = length(s);
    i = 0;
    goto L8(i);
  L8(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l, i2);
    if c4 then L43() else L13();
  L13():
    x2 = `[[`(s, i2, NULL, TRUE);
    st chunk = x2;
    tryCatch = ldf tryCatch;
    check L44() else D16();
  L43():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  D16():
    deopt 61 [i2];
  L14(r68):
    l1 = ld y;
    colnames__ = ldf `colnames<-`;
    check L61() else D25();
  L44():
    p20 = prom<V +>{
      grepl = ldf grepl;
      p7 = prom<V +>{
        chunk = ld chunk;
        chunk1 = force? chunk;
        checkMissing(chunk1);
        return chunk1;
      };
      r29 = dyn grepl("(   |\t)", p7);
      r30 = `!`(r29);
      c5 = `as.logical`(r30);
      if c5 then L1() else L0();
    L0():
      gsub = ldf gsub;
      p8 = prom<V +>{
        chunk2 = ld chunk;
        chunk3 = force? chunk2;
        checkMissing(chunk3);
        return chunk3;
      };
      r32 = dyn gsub("\n[ \t]+", "\t", p8);
      st chunk = r32;
      strsplit1 = ldf strsplit;
      p11 = prom<V +>{
        unlist1 = ldf unlist;
        p10 = prom<V +>{
          strsplit2 = ldf strsplit;
          p9 = prom<V +>{
            chunk4 = ld chunk;
            chunk5 = force? chunk4;
            checkMissing(chunk5);
            return chunk5;
          };
          r34 = dyn strsplit2(p9, "\n");
          return r34;
        };
        r36 = dyn unlist1(p10);
        return r36;
      };
      r38 = dyn strsplit1(p11, "[ \t]");
      st x = r38;
      cbind = ldf cbind;
      p15 = prom<V +>{
        unlist2 = ldf unlist;
        p14 = prom<V +>{
          lapply = ldf lapply;
          p12 = prom<V +>{
            x3 = ld x;
            x4 = force? x3;
            checkMissing(x4);
            return x4;
          };
          p13 = prom<V +>{
            __ = ld `[[`;
            __1 = force? __;
            checkMissing(__1);
            return __1;
          };
          r41 = dyn lapply(p12, p13, 1);
          return r41;
        };
        r43 = dyn unlist2(p14);
        return r43;
      };
      p19 = prom<V +>{
        unlist3 = ldf unlist;
        p18 = prom<V +>{
          lapply1 = ldf lapply;
          p16 = prom<V +>{
            x5 = ld x;
            x6 = force? x5;
            checkMissing(x6);
            return x6;
          };
          p17 = prom<V +>{
            r46 = clos inner3207722480;
            return r46;
          };
          r48 = dyn lapply1(p16, p17);
          return r48;
        };
        r50 = dyn unlist3(p18);
        return r50;
      };
      r52 = dyn cbind(p15, p19);
      return r52;
    L1():
      return NULL;
    };
    p21 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r55 = dyn tryCatch[, error](p20, p21);
    check L45() else D17();
  L58():
    c13 = ldf c in base;
    r69 = dyn c13("Item", "Description");
    check L60() else D24();
  L59():
    r67 = dyn base4("Item", "Description");
    goto L14(r67);
  D17():
    deopt 65 [i2, r55];
  D24():
    deopt 99 [r69];
  D25():
    deopt 101 [r68, l1, r68];
  L45():
    st entries = r55;
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L60():
    goto L14(r69);
  L61():
    r70 = dyn colnames__(l1, NULL, r68);
    check L62() else D26();
  D26():
    deopt 103 [r68, r70];
  L9(i7, r57):
    r59 = `!`(r57);
    c6 = `as.logical`(r59);
    if c6 then L50() else L10(i7, c6);
  L46():
    entries = ld entries;
    check L48() else D18();
  L47():
    r56 = dyn base3(<sym entries>, "error");
    goto L9(i2, r56);
  L62():
    st y = r70;
    y2 = ld y;
    check L63() else D27();
  D18():
    deopt 69 [i2, entries];
  D27():
    deopt 105 [y2];
  L10(i9, c8):
    c12 = `as.logical`(c8);
    if c12 then L54() else L11();
  L48():
    entries1 = force? entries;
    checkMissing(entries1);
    inherits1 = ldf inherits in base;
    r58 = dyn inherits1(entries1, "error", FALSE);
    check L49() else D19();
  L50():
    NCOL = ldf NCOL;
    check L51() else D20();
  L63():
    y3 = force? y2;
    checkMissing(y3);
    popenv;
    return y3;
  D19():
    deopt 74 [i2, r58];
  D20():
    deopt 77 [i7, c6];
  L11():
    goto L12(i9);
  L12(i13):
    goto L8(i13);
  L49():
    goto L9(i2, r58);
  L51():
    p22 = prom<V +>{
      entries2 = ld entries;
      entries3 = force? entries2;
      checkMissing(entries3);
      return entries3;
    };
    r61 = dyn NCOL(p22);
    check L52() else D21();
  L54():
    rbind = ldf rbind;
    check L55() else D22();
  D21():
    deopt 79 [i7, c6, r61];
  D22():
    deopt 84 [i9];
  L52():
    r62 = `==`(r61, 2);
    c9 = `as.logical`(r62);
    c10 = `&&`(c6, c9);
    goto L10(i7, c10);
  L55():
    p23 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p24 = prom<V +>{
      entries4 = ld entries;
      entries5 = force? entries4;
      checkMissing(entries5);
      return entries5;
    };
    r65 = dyn rbind(p23, p24);
    check L56() else D23();
  D23():
    deopt 87 [i9, r65];
  L56():
    st y = r65;
    goto L12(i9);
  }
}
fun inner3207722480(t) {
  (reg t:*) -+> V { var t:*, reg paste:cls, reg t1:*, reg t2:V, reg c:L, reg t4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg t7:V, reg r1:V, reg which:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg t8:*, reg t9:V, reg nzchar:cls, reg r4:V, reg r5:V, reg p:p(V +), reg r7:V, reg c1:cls, reg r8:V, reg r9:V, reg __:cls, reg r10:V, reg p1:p(V +), reg r12:V |
    mkenv;
    st t = t;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      t1 = ld t;
      t2 = force? t1;
      checkMissing(t2);
      c = `is.object`(t2);
      if c then L2() else L3(t2);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", t2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(t4):
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L1(t7, r1):
      r9 = `-`(<missing>, r1);
      __ = ldf `[` in base;
      r10 = dyn __(t7, r9);
      goto L0(r10);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      which = ldf which;
      p = prom<V +>{
        sym1 = ldf nzchar;
        base1 = ldf nzchar in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r3):
        r5 = `!`(r3);
        return r5;
      L1():
        t8 = ld t;
        t9 = force? t8;
        checkMissing(t9);
        nzchar = ldf nzchar in base;
        r4 = dyn nzchar(t9);
        goto L0(r4);
      L2():
        r2 = dyn base1(<sym t>);
        goto L0(r2);
      };
      r7 = dyn which(p);
      c1 = ldf c in base;
      r8 = dyn c1(1, r7);
      goto L1(t4, r8);
    L6():
      r = dyn base(1, <lang which(`!`(nzchar(t)))>);
      goto L1(t4, r);
    };
    r12 = dyn paste[, collapse](p1, " ");
    check L1() else D1();
  D1():
    deopt 5 [r12];
  L1():
    popenv;
    return r12;
  }
}