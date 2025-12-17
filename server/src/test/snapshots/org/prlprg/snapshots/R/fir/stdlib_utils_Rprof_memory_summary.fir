fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4276877896;
    st Rprof_memory_summary = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4276877896(con, chunksize, label, aggregate, diff, exclude, `sample.interval`) {
  (reg con:*, reg chunksize:*, reg label:*, reg aggregate:*, reg diff:*, reg exclude:*, reg sample_interval:*) -+> V { var con:*, var chunksize:*, reg chunksize_isMissing:L, reg chunksize_orDefault:*, var label:*, reg label_isMissing:L, reg label_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var aggregate:*, reg aggregate_isMissing:L, reg aggregate_orDefault:*, var diff:*, reg diff_isMissing:L, reg diff_orDefault:*, var exclude:*, reg exclude_isMissing:L, reg exclude_orDefault:*, var `sample.interval`:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg label1:*, reg label2:V, reg length:cls, reg r8:V, reg vector:cls, reg r9:V, reg readLines:cls, reg con1:*, reg con2:V, reg p1:p(V +), reg chunksize1:*, reg chunksize2:V, reg p2:p(V +), reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg chunk:*, reg chunk1:V, reg length1:cls, reg r15:V, reg r16:V, reg c1:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg regexpr:cls, reg chunk2:*, reg chunk3:V, reg p3:p(V +), reg r21:V, reg attr:cls, reg r22:V, reg substr:cls, reg chunk4:*, reg chunk5:V, reg p4:p(V +), reg memprefix:*, reg memprefix1:V, reg r24:V, reg p5:p(V +), reg r26:V, reg rbind:cls, reg t:cls, reg sapply:cls, reg strsplit:cls, reg memstuff:*, reg memstuff1:V, reg p6:p(V +), reg r28:V, reg p7:p(V +), reg as_numeric:*, reg as_numeric1:V, reg p8:p(V +), reg r31:V, reg p9:p(V +), reg r33:V, reg p10:p(V +), reg r35:V, reg cbind:cls, reg mcnt:*, reg mcnt1:V, reg c2:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r36:V, reg r37:V, reg p11:p(V +), reg mcnt4:*, reg mcnt5:V, reg c3:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r39:V, reg p12:p(V +), reg r41:V, reg substr1:cls, reg chunk6:*, reg chunk7:V, reg p13:p(V +), reg memprefix2:*, reg memprefix3:V, reg r43:V, reg p14:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg chunk8:*, reg chunk9:V, reg nchar:cls, reg r47:V, reg p15:p(V +), reg r49:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r52:V, reg r53:V, reg chunk10:*, reg chunk11:V, reg nchar1:cls, reg r54:V, reg r55:V, reg any:cls, reg r56:V, reg c4:L, reg mcnt8:*, reg mcnt9:V, reg c5:L, reg mcnt11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg c6:*, reg c7:V, reg r57:V, reg __2:cls, reg r58:V, reg chunk12:*, reg chunk13:V, reg c8:L, reg chunk15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg c9:*, reg c10:V, reg r59:V, reg __3:cls, reg r60:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r61:V, reg r62:V, reg chunk16:*, reg chunk17:V, reg length2:cls, reg r63:V, reg r64:V, reg c11:L, reg rbind1:cls, reg memcounts:*, reg memcounts1:V, reg p16:p(V +), reg mcnt12:*, reg mcnt13:V, reg p17:p(V +), reg r68:V, reg strsplit1:cls, reg chunk18:*, reg chunk19:V, reg p18:p(V +), reg r70:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r71:V, reg r72:V, reg exclude1:*, reg exclude2:V, reg length3:cls, reg r73:V, reg c12:L, reg lapply:cls, reg chunk20:*, reg chunk21:V, reg p19:p(V +), reg r75:cls, reg p20:p(V +), reg r77:V, reg lengths:cls, reg chunk22:*, reg chunk23:V, reg p21:p(V +), reg r80:V, reg r81:V, reg sapply1:cls, reg chunk24:*, reg chunk25:V, reg c13:L, reg chunk27:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg len_pos:*, reg len_pos1:V, reg __4:cls, reg r82:V, reg p22:p(V +), reg __5:*, reg __6:V, reg p23:p(V +), reg r85:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r86:V, reg r87:V, reg firsts:*, reg firsts1:V, reg newfirsts:*, reg newfirsts1:V, reg c14:cls, reg r88:V, reg aggregate1:*, reg aggregate2:V, reg r89:V, reg c15:L, reg c17:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r90:V, reg c20:L, reg r91:V, reg label3:*, reg label4:V, reg length4:cls, reg r92:V, reg c21:L, reg c22:V, reg c24:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r93:V, reg r94:V, reg label5:*, reg label6:V, reg r95:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c25:L, reg x:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r96:V, reg i7:I, reg r97:V, reg labels:*, reg labels1:V, reg c26:L, reg i9:I, reg labels3:V, reg dr10:V, reg dc5:L, reg dx11:V, reg i11:I, reg dx12:V, reg i12:*, reg i13:V, reg __7:cls, reg r98:V, reg label7:*, reg label8:V, reg c27:L, reg i15:I, reg label10:V, reg dr12:V, reg dc6:L, reg dx13:V, reg i17:I, reg dx14:V, reg i18:*, reg i19:V, reg __8:cls, reg r99:V, reg r100:V, reg c28:L, reg newfirsts2:*, reg newfirsts3:V, reg i22:I, reg newfirsts4:V, reg label11:*, reg label12:V, reg c29:L, reg i24:I, reg label14:V, reg dr14:V, reg dc7:L, reg dx15:V, reg i26:I, reg dx16:V, reg i27:*, reg i28:V, reg __9:cls, reg r101:V, reg r102:V, reg c30:L, reg sapply2:cls, reg chunk28:*, reg chunk29:V, reg p24:p(V +), reg r104:cls, reg p25:p(V +), reg r106:V, reg sapply3:cls, reg chunk30:*, reg chunk31:V, reg p26:p(V +), reg r108:cls, reg p27:p(V +), reg r110:V, reg c31:cls, reg r111:V, reg l1:*, reg c32:L, reg i32:I, reg r113:V, reg l3:*, reg dr16:V, reg dc8:L, reg dx17:V, reg i34:I, reg dx18:V, reg i35:*, reg i36:V, reg ____:cls, reg r116:V, reg aggregate3:*, reg aggregate4:V, reg c33:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r117:V, reg r118:V, reg index:*, reg index1:V, reg sapply4:cls, reg chunk32:*, reg chunk33:V, reg p28:p(V +), reg aggregate5:*, reg aggregate6:V, reg r120:V, reg c34:L, reg r121:cls, reg r122:cls, reg p29:p(V +), reg r124:V, reg c35:cls, reg r125:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r126:V, reg r127:V, reg chunk34:*, reg chunk35:V, reg length5:cls, reg r128:V, reg chunksize3:*, reg chunksize4:V, reg r129:V, reg c36:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r131:V, reg r132:V, reg memcounts2:*, reg memcounts3:V, reg length6:cls, reg r133:V, reg r134:V, reg c37:L, reg stop:cls, reg r135:V, reg as_data_frame:cls, reg memcounts4:*, reg memcounts5:V, reg p30:p(V +), reg r138:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r139:V, reg r140:V, reg c38:cls, reg r141:V, reg l4:*, reg names__:cls, reg r142:V, reg aggregate7:*, reg aggregate8:V, reg r143:V, reg c39:L, reg nrow:cls, reg memcounts6:*, reg memcounts7:V, reg p31:p(V +), reg r145:V, reg r146:V, reg sample_interval1:*, reg sample_interval2:V, reg r147:V, reg l5:*, reg rownames__:cls, reg r148:V, reg paste0:cls, reg label15:*, reg label16:V, reg p32:p(V +), reg r150:V, reg l6:*, reg names__1:cls, reg r151:V, reg cbind1:cls, reg memcounts8:*, reg memcounts9:V, reg p33:p(V +), reg labels4:*, reg labels5:V, reg p34:p(V +), reg r154:V, reg diff1:*, reg diff2:V, reg c40:L, reg pmax:cls, reg apply:cls, reg memcounts10:*, reg memcounts11:V, reg c41:L, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg __10:cls, reg r156:V, reg p35:p(V +), reg diff3:*, reg diff4:V, reg p36:p(V +), reg r159:V, reg p37:p(V +), reg r161:V, reg l7:*, reg c42:L, reg r163:V, reg l9:*, reg dr20:V, reg dc10:L, reg dx21:V, reg r165:V, reg dx22:V, reg ___:cls, reg r166:V, reg aggregate9:*, reg aggregate10:V, reg c43:L, reg by:cls, reg memcounts14:*, reg memcounts15:V, reg p38:p(V +), reg index2:*, reg index3:V, reg p39:p(V +), reg r170:cls, reg p40:p(V +), reg r172:V, reg memcounts16:*, reg memcounts17:V |
    mkenv;
    st con = con;
    chunksize_isMissing = missing.0(chunksize);
    if chunksize_isMissing then L0(5000.0) else L0(chunksize);
  L0(chunksize_orDefault):
    st chunksize = chunksize_orDefault;
    label_isMissing = missing.0(label);
    if label_isMissing then L1() else L2(label);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c(1.0, -1.0);
      goto L0(r2);
    L2():
      r = dyn base(1.0, <lang `-`(1.0)>);
      goto L0(r);
    };
    goto L2(p);
  L2(label_orDefault):
    st label = label_orDefault;
    aggregate_isMissing = missing.0(aggregate);
    if aggregate_isMissing then L3(0.0) else L3(aggregate);
  L3(aggregate_orDefault):
    st aggregate = aggregate_orDefault;
    diff_isMissing = missing.0(diff);
    if diff_isMissing then L4(FALSE) else L4(diff);
  L4(diff_orDefault):
    st diff = diff_orDefault;
    exclude_isMissing = missing.0(exclude);
    if exclude_isMissing then L5(NULL) else L5(exclude);
  L5(exclude_orDefault):
    st exclude = exclude_orDefault;
    st `sample.interval` = sample_interval;
    st memcounts = NULL;
    st firsts = NULL;
    sym1 = ldf vector;
    base1 = ldf vector in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L57() else L58();
  L6(r5):
    st labels = r5;
    st index = NULL;
    goto L21();
  L57():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L59() else L60();
  L58():
    r4 = dyn base1("list", <lang length(label)>);
    goto L6(r4);
  L7(r7):
    vector = ldf vector in base;
    r9 = dyn vector("list", r7);
    check L63() else D2();
  L21():
    readLines = ldf readLines;
    check L64() else D3();
  L59():
    label1 = ld label;
    check L61() else D0();
  L60():
    r6 = dyn base2(<sym label>);
    goto L7(r6);
  D0():
    deopt 11 [label1];
  D2():
    deopt 16 [r9];
  D3():
    deopt 22 [];
  L61():
    label2 = force? label1;
    checkMissing(label2);
    length = ldf length in base;
    r8 = dyn length(label2);
    check L62() else D1();
  L63():
    goto L6(r9);
  L64():
    p1 = prom<V +>{
      con1 = ld con;
      con2 = force? con1;
      checkMissing(con2);
      return con2;
    };
    p2 = prom<V +>{
      chunksize1 = ld chunksize;
      chunksize2 = force? chunksize1;
      checkMissing(chunksize2);
      return chunksize2;
    };
    r12 = dyn readLines[, n](p1, p2);
    check L65() else D4();
  D1():
    deopt 14 [r8];
  D4():
    deopt 26 [r12];
  L62():
    goto L7(r8);
  L65():
    st chunk = r12;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L66() else L67();
  L8(r14):
    r16 = `!`(r14);
    c1 = `as.logical`(r16);
    if c1 then L70() else L9();
  L66():
    chunk = ld chunk;
    check L68() else D5();
  L67():
    r13 = dyn base3(<sym chunk>);
    goto L8(r13);
  D5():
    deopt 30 [chunk];
  L9():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L73() else L74();
  L10():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L195() else L196();
  L68():
    chunk1 = force? chunk;
    checkMissing(chunk1);
    length1 = ldf length in base;
    r15 = dyn length1(chunk1);
    check L69() else D6();
  L70():
    goto L10();
  D6():
    deopt 33 [r15];
  L12(r19):
    st memprefix = r19;
    substr = ldf substr;
    check L78() else D10();
  L47(r132):
    r134 = `==`(r132, 0);
    c37 = `as.logical`(r134);
    if c37 then L199() else L48();
  L69():
    goto L8(r15);
  L73():
    regexpr = ldf regexpr;
    check L75() else D7();
  L74():
    r18 = dyn base4(<lang regexpr(":[0-9]+:[0-9]+:[0-9]+:[0-9]+:", chunk)>, "match.length");
    goto L12(r18);
  L195():
    memcounts2 = ld memcounts;
    check L197() else D67();
  L196():
    r131 = dyn base16(<sym memcounts>);
    goto L47(r131);
  D7():
    deopt 42 [];
  D10():
    deopt 51 [];
  D67():
    deopt 259 [memcounts2];
  L48():
    goto L49();
  L49():
    as_data_frame = ldf `as.data.frame`;
    check L203() else D71();
  L75():
    p3 = prom<V +>{
      chunk2 = ld chunk;
      chunk3 = force? chunk2;
      checkMissing(chunk3);
      return chunk3;
    };
    r21 = dyn regexpr(":[0-9]+:[0-9]+:[0-9]+:[0-9]+:", p3);
    check L76() else D8();
  L78():
    p4 = prom<V +>{
      chunk4 = ld chunk;
      chunk5 = force? chunk4;
      checkMissing(chunk5);
      return chunk5;
    };
    p5 = prom<V +>{
      memprefix = ld memprefix;
      memprefix1 = force? memprefix;
      checkMissing(memprefix1);
      r24 = `-`(memprefix1, 1);
      return r24;
    };
    r26 = dyn substr(p4, 2, p5);
    check L79() else D11();
  L197():
    memcounts3 = force? memcounts2;
    checkMissing(memcounts3);
    length6 = ldf length in base;
    r133 = dyn length6(memcounts3);
    check L198() else D68();
  L199():
    stop = ldf stop;
    check L200() else D69();
  D8():
    deopt 45 [r21];
  D11():
    deopt 55 [r26];
  D68():
    deopt 262 [r133];
  D69():
    deopt 266 [];
  D71():
    deopt 272 [];
  L76():
    attr = ldf attr in base;
    r22 = dyn attr(r21, "match.length");
    check L77() else D9();
  L79():
    st memstuff = r26;
    rbind = ldf rbind;
    check L80() else D12();
  L198():
    goto L47(r133);
  L200():
    r135 = dyn stop("no events were recorded");
    check L201() else D70();
  L203():
    p30 = prom<V +>{
      memcounts4 = ld memcounts;
      memcounts5 = force? memcounts4;
      checkMissing(memcounts5);
      return memcounts5;
    };
    r138 = dyn as_data_frame(p30);
    check L204() else D72();
  D9():
    deopt 48 [r22];
  D12():
    deopt 58 [];
  D70():
    deopt 268 [r135];
  D72():
    deopt 274 [r138];
  L77():
    goto L12(r22);
  L80():
    p10 = prom<V +>{
      t = ldf t;
      p9 = prom<V +>{
        sapply = ldf sapply;
        p7 = prom<V +>{
          strsplit = ldf strsplit;
          p6 = prom<V +>{
            memstuff = ld memstuff;
            memstuff1 = force? memstuff;
            checkMissing(memstuff1);
            return memstuff1;
          };
          r28 = dyn strsplit(p6, ":");
          return r28;
        };
        p8 = prom<V +>{
          as_numeric = ld `as.numeric`;
          as_numeric1 = force? as_numeric;
          checkMissing(as_numeric1);
          return as_numeric1;
        };
        r31 = dyn sapply(p7, p8);
        return r31;
      };
      r33 = dyn t(p9);
      return r33;
    };
    r35 = dyn rbind(p10);
    check L81() else D13();
  L201():
    goto L49();
  L204():
    st memcounts = r138;
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L205() else L206();
  D13():
    deopt 60 [r35];
  L50(r140):
    l4 = ld memcounts;
    names__ = ldf `names<-`;
    check L208() else D74();
  L81():
    st mcnt = r35;
    cbind = ldf cbind;
    check L82() else D14();
  L205():
    c38 = ldf c in base;
    r141 = dyn c38("vsize.small", "vsize.large", "nodes", "duplications");
    check L207() else D73();
  L206():
    r139 = dyn base17("vsize.small", "vsize.large", "nodes", "duplications");
    goto L50(r139);
  D14():
    deopt 63 [];
  D73():
    deopt 283 [r141];
  D74():
    deopt 285 [r140, l4, r140];
  L82():
    p11 = prom<V +>{
      mcnt = ld mcnt;
      mcnt1 = force? mcnt;
      checkMissing(mcnt1);
      c2 = `is.object`(mcnt1);
      if c2 then L1() else L2();
    L0(dx1):
      r37 = `*`(dx1, 8.0);
      return r37;
    L1():
      dr = tryDispatchBuiltin.1("[", mcnt1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r36 = dyn __(mcnt1, <missing>, <int 1, 2>, FALSE);
      goto L0(r36);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p12 = prom<V +>{
      mcnt4 = ld mcnt;
      mcnt5 = force? mcnt4;
      checkMissing(mcnt5);
      c3 = `is.object`(mcnt5);
      if c3 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", mcnt5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r39 = dyn __1(mcnt5, <missing>, <int 3, 4>, FALSE);
      goto L0(r39);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r41 = dyn cbind(p11, p12);
    check L83() else D15();
  L207():
    goto L50(r141);
  L208():
    r142 = dyn names__(l4, NULL, r140);
    check L209() else D75();
  D15():
    deopt 66 [r41];
  D75():
    deopt 287 [r140, r142];
  L83():
    st mcnt = r41;
    substr1 = ldf substr;
    check L84() else D16();
  L209():
    st memcounts = r142;
    aggregate7 = ld aggregate;
    check L210() else D76();
  D16():
    deopt 69 [];
  D76():
    deopt 289 [aggregate7];
  L84():
    p13 = prom<V +>{
      chunk6 = ld chunk;
      chunk7 = force? chunk6;
      checkMissing(chunk7);
      return chunk7;
    };
    p14 = prom<V +>{
      memprefix2 = ld memprefix;
      memprefix3 = force? memprefix2;
      checkMissing(memprefix3);
      r43 = `+`(memprefix3, 1.0);
      return r43;
    };
    p15 = prom<V +>{
      sym5 = ldf nchar;
      base5 = ldf nchar in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      chunk8 = ld chunk;
      chunk9 = force? chunk8;
      checkMissing(chunk9);
      nchar = ldf nchar in base;
      r47 = dyn nchar(chunk9, "c", FALSE, NA_LGL);
      goto L0(r47);
    L2():
      r45 = dyn base5(<sym chunk>, "c");
      goto L0(r45);
    };
    r49 = dyn substr1(p13, p14, p15);
    check L85() else D17();
  L210():
    aggregate8 = force? aggregate7;
    checkMissing(aggregate8);
    r143 = `!`(aggregate8);
    c39 = `as.logical`(r143);
    if c39 then L211() else L51();
  D17():
    deopt 73 [r49];
  L51():
    goto L52();
  L52():
    diff1 = ld diff;
    check L224() else D88();
  L85():
    st chunk = r49;
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L86() else L87();
  L211():
    nrow = ldf nrow;
    check L212() else D77();
  D77():
    deopt 294 [1];
  D88():
    deopt 323 [diff1];
  L13(r51):
    c4 = `as.logical`(r51);
    if c4 then L93() else L15();
  L86():
    sym7 = ldf nchar;
    base7 = ldf nchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L88() else L89();
  L87():
    r50 = dyn base6(<lang `<-`(c0, `==`(nchar(chunk, "c"), 0))>);
    goto L13(r50);
  L212():
    p31 = prom<V +>{
      memcounts6 = ld memcounts;
      memcounts7 = force? memcounts6;
      checkMissing(memcounts7);
      return memcounts7;
    };
    r145 = dyn nrow(p31);
    check L213() else D78();
  L224():
    diff2 = force? diff1;
    checkMissing(diff2);
    c40 = `as.logical`(diff2);
    if c40 then L225() else L53();
  D78():
    deopt 296 [1, r145];
  L14(r53):
    r55 = `==`(r53, 0);
    st c0 = r55;
    any = ldf any in base;
    r56 = dyn any(r55);
    check L92() else D20();
  L15():
    goto L18();
  L18():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L105() else L106();
  L53():
    goto L55();
  L55():
    aggregate9 = ld aggregate;
    check L232() else D91();
  L88():
    chunk10 = ld chunk;
    check L90() else D18();
  L89():
    r52 = dyn base7(<sym chunk>, "c");
    goto L14(r52);
  L93():
    mcnt8 = ld mcnt;
    check L94() else D21();
  L213():
    r146 = `:`(1, r145);
    sample_interval1 = ld `sample.interval`;
    check L214() else D79();
  L225():
    pmax = ldf pmax;
    check L226() else D89();
  D18():
    deopt 79 [chunk10];
  D20():
    deopt 90 [r56];
  D21():
    deopt 91 [mcnt8];
  D79():
    deopt 297 [r146, sample_interval1];
  D89():
    deopt 326 [];
  D91():
    deopt 338 [aggregate9];
  L19(r62):
    r64 = `!`(r62);
    c11 = `as.logical`(r64);
    if c11 then L109() else L20();
  L90():
    chunk11 = force? chunk10;
    checkMissing(chunk11);
    nchar1 = ldf nchar in base;
    r54 = dyn nchar1(chunk11, "c", FALSE, NA_LGL);
    check L91() else D19();
  L92():
    goto L13(r56);
  L94():
    mcnt9 = force? mcnt8;
    checkMissing(mcnt9);
    c5 = `is.object`(mcnt9);
    if c5 then L95() else L96(mcnt9);
  L105():
    chunk16 = ld chunk;
    check L107() else D25();
  L106():
    r61 = dyn base8(<sym chunk>);
    goto L19(r61);
  L214():
    sample_interval2 = force? sample_interval1;
    checkMissing(sample_interval2);
    r147 = `*`(r146, sample_interval2);
    l5 = ld memcounts;
    rownames__ = ldf `rownames<-`;
    check L215() else D80();
  L226():
    p37 = prom<V +>{
      apply = ldf apply;
      p35 = prom<V +>{
        memcounts10 = ld memcounts;
        memcounts11 = force? memcounts10;
        checkMissing(memcounts11);
        c41 = `is.object`(memcounts11);
        if c41 then L1() else L2();
      L0(dx20):
        return dx20;
      L1():
        dr18 = tryDispatchBuiltin.1("[", memcounts11);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L3() else L2();
      L2():
        __10 = ldf `[` in base;
        r156 = dyn __10(memcounts11, <missing>, <int 1, 2, 3>);
        goto L0(r156);
      L3():
        dx19 = getTryDispatchBuiltinValue(dr18);
        goto L0(dx19);
      };
      p36 = prom<V +>{
        diff3 = ld diff;
        diff4 = force? diff3;
        checkMissing(diff4);
        return diff4;
      };
      r159 = dyn apply(p35, 2, p36);
      return r159;
    };
    r161 = dyn pmax(0, p37);
    check L227() else D90();
  L232():
    aggregate10 = force? aggregate9;
    checkMissing(aggregate10);
    c43 = `as.logical`(aggregate10);
    if c43 then L233() else L56();
  D19():
    deopt 85 [r54];
  D25():
    deopt 111 [chunk16];
  D80():
    deopt 301 [r147, l5, r147];
  D90():
    deopt 329 [r161];
  L16(dx5):
    st mcnt = dx5;
    chunk12 = ld chunk;
    check L99() else D23();
  L20():
    rbind1 = ldf rbind;
    check L112() else D27();
  L56():
    memcounts16 = ld memcounts;
    check L237() else D94();
  L91():
    goto L14(r54);
  L95():
    dr4 = tryDispatchBuiltin.1("[", mcnt9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L97() else L96(dr4);
  L96(mcnt11):
    c6 = ld c0;
    check L98() else D22();
  L107():
    chunk17 = force? chunk16;
    checkMissing(chunk17);
    length2 = ldf length in base;
    r63 = dyn length2(chunk17);
    check L108() else D26();
  L109():
    goto L21();
  L215():
    r148 = dyn rownames__(l5, NULL, r147);
    check L216() else D81();
  L227():
    l7 = ld memcounts;
    c42 = `is.object`(l7);
    if c42 then L228() else L229(r161, l7);
  L233():
    by = ldf by;
    check L234() else D92();
  D22():
    deopt 93 [mcnt11, c6];
  D23():
    deopt 100 [chunk12];
  D26():
    deopt 114 [r63];
  D27():
    deopt 121 [];
  D81():
    deopt 303 [r147, r148];
  D92():
    deopt 341 [];
  D94():
    deopt 346 [memcounts16];
  L54(r165, dx22):
    st memcounts = dx22;
    goto L55();
  L97():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(dx4);
  L98():
    c7 = force? c6;
    checkMissing(c7);
    r57 = `!`(c7);
    __2 = ldf `[` in base;
    r58 = dyn __2(mcnt9, r57, <missing>);
    goto L16(r58);
  L99():
    chunk13 = force? chunk12;
    checkMissing(chunk13);
    c8 = `is.object`(chunk13);
    if c8 then L100() else L101(chunk13);
  L108():
    goto L19(r63);
  L112():
    p16 = prom<V +>{
      memcounts = ld memcounts;
      memcounts1 = force? memcounts;
      checkMissing(memcounts1);
      return memcounts1;
    };
    p17 = prom<V +>{
      mcnt12 = ld mcnt;
      mcnt13 = force? mcnt12;
      checkMissing(mcnt13);
      return mcnt13;
    };
    r68 = dyn rbind1(p16, p17);
    check L113() else D28();
  L216():
    st memcounts = r148;
    paste0 = ldf paste0;
    check L217() else D82();
  L228():
    dr20 = tryDispatchBuiltin.0("[<-", l7, r161);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L230() else L229(r161, dr20);
  L229(r163, l9):
    ___ = ldf `[<-` in base;
    r166 = dyn ___(l9, r161, -1, <int 1, 2, 3>);
    goto L54(r163, r166);
  L234():
    p38 = prom<V +>{
      memcounts14 = ld memcounts;
      memcounts15 = force? memcounts14;
      checkMissing(memcounts15);
      return memcounts15;
    };
    p39 = prom<V +>{
      index2 = ld index;
      index3 = force? index2;
      checkMissing(index3);
      return index3;
    };
    p40 = prom<V +>{
      r170 = clos inner823136959;
      return r170;
    };
    r172 = dyn by(p38, p39, p40);
    check L235() else D93();
  L237():
    memcounts17 = force? memcounts16;
    checkMissing(memcounts17);
    popenv;
    return memcounts17;
  D28():
    deopt 124 [r68];
  D82():
    deopt 306 [];
  D93():
    deopt 345 [r172];
  L17(dx7):
    st chunk = dx7;
    goto L18();
  L100():
    dr6 = tryDispatchBuiltin.1("[", chunk13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L102() else L101(dr6);
  L101(chunk15):
    c9 = ld c0;
    check L103() else D24();
  L113():
    st memcounts = r68;
    strsplit1 = ldf strsplit;
    check L114() else D29();
  L217():
    p32 = prom<V +>{
      label15 = ld label;
      label16 = force? label15;
      checkMissing(label16);
      return label16;
    };
    r150 = dyn paste0("stack:", p32);
    check L218() else D83();
  L230():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L54(r161, dx21);
  L235():
    popenv;
    return r172;
  D24():
    deopt 102 [chunk15, c9];
  D29():
    deopt 127 [];
  D83():
    deopt 309 [r150];
  L102():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L17(dx6);
  L103():
    c10 = force? c9;
    checkMissing(c10);
    r59 = `!`(c10);
    __3 = ldf `[` in base;
    r60 = dyn __3(chunk15, r59);
    goto L17(r60);
  L114():
    p18 = prom<V +>{
      chunk18 = ld chunk;
      chunk19 = force? chunk18;
      checkMissing(chunk19);
      return chunk19;
    };
    r70 = dyn strsplit1(p18, " ");
    check L115() else D30();
  L218():
    l6 = ld labels;
    names__1 = ldf `names<-`;
    check L219() else D84();
  D30():
    deopt 130 [r70];
  D84():
    deopt 311 [r150, l6, r150];
  L115():
    st chunk = r70;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L116() else L117();
  L219():
    r151 = dyn names__1(l6, NULL, r150);
    check L220() else D85();
  D85():
    deopt 313 [r150, r151];
  L23(r72):
    c12 = `as.logical`(r72);
    if c12 then L120() else L24();
  L116():
    exclude1 = ld exclude;
    check L118() else D31();
  L117():
    r71 = dyn base9(<sym exclude>);
    goto L23(r71);
  L220():
    st labels = r151;
    cbind1 = ldf cbind;
    check L221() else D86();
  D31():
    deopt 134 [exclude1];
  D86():
    deopt 316 [];
  L24():
    goto L25();
  L25():
    lengths = ldf lengths;
    check L124() else D35();
  L118():
    exclude2 = force? exclude1;
    checkMissing(exclude2);
    length3 = ldf length in base;
    r73 = dyn length3(exclude2);
    check L119() else D32();
  L120():
    lapply = ldf lapply;
    check L121() else D33();
  L221():
    p33 = prom<V +>{
      memcounts8 = ld memcounts;
      memcounts9 = force? memcounts8;
      checkMissing(memcounts9);
      return memcounts9;
    };
    p34 = prom<V +>{
      labels4 = ld labels;
      labels5 = force? labels4;
      checkMissing(labels5);
      return labels5;
    };
    r154 = dyn cbind1(p33, p34);
    check L222() else D87();
  D32():
    deopt 137 [r73];
  D33():
    deopt 139 [];
  D35():
    deopt 147 [];
  D87():
    deopt 319 [r154];
  L119():
    goto L23(r73);
  L121():
    p19 = prom<V +>{
      chunk20 = ld chunk;
      chunk21 = force? chunk20;
      checkMissing(chunk21);
      return chunk21;
    };
    p20 = prom<V +>{
      r75 = clos inner325108712;
      return r75;
    };
    r77 = dyn lapply(p19, p20);
    check L122() else D34();
  L124():
    p21 = prom<V +>{
      chunk22 = ld chunk;
      chunk23 = force? chunk22;
      checkMissing(chunk23);
      return chunk23;
    };
    r80 = dyn lengths(p21);
    check L125() else D36();
  L222():
    st memcounts = r154;
    goto L52();
  D34():
    deopt 142 [r77];
  D36():
    deopt 149 [r80];
  L122():
    st chunk = r77;
    goto L25();
  L125():
    r81 = `>`(r80, 0);
    st `len.pos` = r81;
    sapply1 = ldf sapply;
    check L126() else D37();
  D37():
    deopt 154 [];
  L126():
    p22 = prom<V +>{
      chunk24 = ld chunk;
      chunk25 = force? chunk24;
      checkMissing(chunk25);
      c13 = `is.object`(chunk25);
      if c13 then L1() else L2(chunk25);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("[", chunk25);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(chunk27):
      len_pos = ld `len.pos`;
      len_pos1 = force? len_pos;
      __4 = ldf `[` in base;
      r82 = dyn __4(chunk27, len_pos1);
      goto L0(r82);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    p23 = prom<V +>{
      __5 = ld `[[`;
      __6 = force? __5;
      checkMissing(__6);
      return __6;
    };
    r85 = dyn sapply1(p22, p23, 1);
    check L127() else D38();
  D38():
    deopt 158 [r85];
  L127():
    st newfirsts = r85;
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L128() else L129();
  L26(r87):
    st firsts = r87;
    aggregate1 = ld aggregate;
    check L133() else D42();
  L128():
    firsts = ld firsts;
    check L130() else D39();
  L129():
    r86 = dyn base10(<sym firsts>, <sym newfirsts>);
    goto L26(r86);
  D39():
    deopt 162 [firsts];
  D42():
    deopt 169 [aggregate1];
  L130():
    firsts1 = force? firsts;
    checkMissing(firsts1);
    newfirsts = ld newfirsts;
    check L131() else D40();
  L133():
    aggregate2 = force? aggregate1;
    checkMissing(aggregate2);
    r89 = `!`(aggregate2);
    c15 = `as.logical`(r89);
    if c15 then L134() else L27(c15);
  D40():
    deopt 164 [newfirsts];
  L27(c17):
    c24 = `as.logical`(c17);
    if c24 then L140() else L29();
  L131():
    newfirsts1 = force? newfirsts;
    checkMissing(newfirsts1);
    c14 = ldf c in base;
    r88 = dyn c14(firsts1, newfirsts1);
    check L132() else D41();
  L134():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L135() else L136();
  D41():
    deopt 167 [r88];
  L28(c20, r91):
    c21 = `as.logical`(r91);
    c22 = `&&`(c20, c21);
    goto L27(c22);
  L29():
    aggregate3 = ld aggregate;
    check L177() else D59();
  L41():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L186() else L187();
  L132():
    goto L26(r88);
  L135():
    label3 = ld label;
    check L137() else D43();
  L136():
    r90 = dyn base11(<sym label>);
    goto L28(c15, r90);
  L140():
    sym12 = ldf seq_along;
    base12 = ldf seq_along in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L141() else L142();
  D43():
    deopt 174 [c15, label3];
  D59():
    deopt 226 [aggregate3];
  L30(r94):
    s = toForSeq(r94);
    l = length(s);
    i = 0;
    goto L31(i);
  L44(r127):
    chunksize3 = ld chunksize;
    check L190() else D66();
  L137():
    label4 = force? label3;
    checkMissing(label4);
    length4 = ldf length in base;
    r92 = dyn length4(label4);
    check L138() else D44();
  L141():
    label5 = ld label;
    check L143() else D45();
  L142():
    r93 = dyn base12(<sym label>);
    goto L30(r93);
  L177():
    aggregate4 = force? aggregate3;
    checkMissing(aggregate4);
    c33 = `as.logical`(aggregate4);
    if c33 then L178() else L42();
  L186():
    chunk34 = ld chunk;
    check L188() else D64();
  L187():
    r126 = dyn base15(<sym chunk>);
    goto L44(r126);
  D44():
    deopt 177 [c15, r92];
  D45():
    deopt 180 [label5];
  D64():
    deopt 244 [chunk34];
  D66():
    deopt 247 [r127, chunksize3];
  L31(i1):
    i2 = `+`.1(i1, 1);
    c25 = `<`.1(l, i2);
    if c25 then L144() else L40();
  L42():
    goto L41();
  L138():
    goto L28(c15, r92);
  L143():
    label6 = force? label5;
    checkMissing(label6);
    r95 = seq_along(label6);
    goto L30(r95);
  L178():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L179() else L180();
  L188():
    chunk35 = force? chunk34;
    checkMissing(chunk35);
    length5 = ldf length in base;
    r128 = dyn length5(chunk35);
    check L189() else D65();
  L190():
    chunksize4 = force? chunksize3;
    checkMissing(chunksize4);
    r129 = `<`(r127, chunksize4);
    c36 = `as.logical`(r129);
    if c36 then L191() else L45();
  D65():
    deopt 247 [r128];
  L40():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L145() else L146();
  L43(r118):
    st index = r118;
    goto L41();
  L45():
    goto L21();
  L144():
    goto L41();
  L179():
    index = ld index;
    check L181() else D60();
  L180():
    r117 = dyn base14(<sym index>, <lang sapply(chunk, if(`>`(aggregate, 0.0), function((line=), paste(`[`(rev(line), `:`(1, min(aggregate, length(line)))), collapse=":"), NULL), function((line=), paste(`[`(line, `:`(1, min(`-`(aggregate), length(line)))), collapse=":"), NULL)))>);
    goto L43(r117);
  L189():
    goto L44(r128);
  L191():
    goto L10();
  D60():
    deopt 230 [index];
  L32(i7, r97):
    l1 = ld labels;
    c32 = `is.object`(l1);
    if c32 then L172() else L173(i7, r97, l1);
  L145():
    labels = ld labels;
    check L147() else D46();
  L146():
    r96 = dyn base13(<lang `[[`(labels, i)>, <lang if(`==`(`[`(label, i), 1.0), newfirsts, if(`>`(`[`(label, i), 1.0), sapply(chunk, function((line=), paste(`[`(rev(line), `:`(1, min(`[`(label, i), length(line)))), collapse=":"), NULL)), sapply(chunk, function((line=), paste(`[`(line, `:`(1, min(`-`(`[`(label, i)), length(line)))), collapse=":"), NULL))))>);
    goto L32(i2, r96);
  L181():
    index1 = force? index;
    checkMissing(index1);
    sapply4 = ldf sapply;
    check L182() else D61();
  D46():
    deopt 185 [i2, labels];
  D61():
    deopt 233 [];
  L39(i34, dx18):
    st labels = dx18;
    goto L31(i34);
  L147():
    labels1 = force? labels;
    checkMissing(labels1);
    c26 = `is.object`(labels1);
    if c26 then L148() else L149(i2, labels1);
  L172():
    dr16 = tryDispatchBuiltin.0("[[<-", l1, r97);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L174() else L173(i7, r97, dr16);
  L173(i32, r113, l3):
    i35 = ld i;
    check L175() else D58();
  L182():
    p28 = prom<V +>{
      chunk32 = ld chunk;
      chunk33 = force? chunk32;
      checkMissing(chunk33);
      return chunk33;
    };
    p29 = prom<V +>{
      aggregate5 = ld aggregate;
      aggregate6 = force? aggregate5;
      checkMissing(aggregate6);
      r120 = `>`(aggregate6, 0.0);
      c34 = `as.logical`(r120);
      if c34 then L1() else L0();
    L0():
      r122 = clos inner766562580;
      return r122;
    L1():
      r121 = clos inner766562580;
      return r121;
    };
    r124 = dyn sapply4(p28, p29);
    check L183() else D62();
  D58():
    deopt 219 [i32, r113, l3, r97, i35];
  D62():
    deopt 236 [r124];
  L33(i11, dx12):
    label7 = ld label;
    check L152() else D48();
  L148():
    dr10 = tryDispatchBuiltin.1("[[", labels1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L150() else L149(i2, dr10);
  L149(i9, labels3):
    i12 = ld i;
    check L151() else D47();
  L174():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L39(i7, dx17);
  L175():
    i36 = force? i35;
    ____ = ldf `[[<-` in base;
    r116 = dyn ____(l3, r97, i36);
    goto L39(i32, r116);
  L183():
    c35 = ldf c in base;
    r125 = dyn c35(index1, r124);
    check L184() else D63();
  D47():
    deopt 187 [i9, labels3, i12];
  D48():
    deopt 190 [i11, label7];
  D63():
    deopt 238 [r125];
  L150():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L33(i2, dx11);
  L151():
    i13 = force? i12;
    __7 = ldf `[[` in base;
    r98 = dyn __7(labels3, i13);
    goto L33(i9, r98);
  L152():
    label8 = force? label7;
    checkMissing(label8);
    c27 = `is.object`(label8);
    if c27 then L153() else L154(i11, label8);
  L184():
    goto L43(r125);
  L34(i17, dx14):
    r100 = `==`(dx14, 1.0);
    c28 = `as.logical`(r100);
    if c28 then L157() else L35();
  L153():
    dr12 = tryDispatchBuiltin.1("[", label8);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L155() else L154(i11, dr12);
  L154(i15, label10):
    i18 = ld i;
    check L156() else D49();
  D49():
    deopt 192 [i15, label10, i18];
  L35():
    label11 = ld label;
    check L160() else D51();
  L36(i22, newfirsts4):
    c31 = ldf c in base;
    r111 = dyn c31(dx12, newfirsts4);
    check L171() else D57();
  L155():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L34(i11, dx13);
  L156():
    i19 = force? i18;
    __8 = ldf `[` in base;
    r99 = dyn __8(label10, i19);
    goto L34(i15, r99);
  L157():
    newfirsts2 = ld newfirsts;
    check L158() else D50();
  D50():
    deopt 197 [i17, newfirsts2];
  D51():
    deopt 199 [i17, label11];
  D57():
    deopt 217 [i22, r111];
  L158():
    newfirsts3 = force? newfirsts2;
    checkMissing(newfirsts3);
    goto L36(i17, newfirsts3);
  L160():
    label12 = force? label11;
    checkMissing(label12);
    c29 = `is.object`(label12);
    if c29 then L161() else L162(i17, label12);
  L171():
    goto L32(i22, r111);
  L37(i26, dx16):
    r102 = `>`(dx16, 1.0);
    c30 = `as.logical`(r102);
    if c30 then L165() else L38();
  L161():
    dr14 = tryDispatchBuiltin.1("[", label12);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L163() else L162(i17, dr14);
  L162(i24, label14):
    i27 = ld i;
    check L164() else D52();
  D52():
    deopt 201 [i24, label14, i27];
  L38():
    sapply3 = ldf sapply;
    check L169() else D55();
  L163():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L37(i17, dx15);
  L164():
    i28 = force? i27;
    __9 = ldf `[` in base;
    r101 = dyn __9(label14, i28);
    goto L37(i24, r101);
  L165():
    sapply2 = ldf sapply;
    check L166() else D53();
  D53():
    deopt 207 [i26];
  D55():
    deopt 212 [i26];
  L166():
    p24 = prom<V +>{
      chunk28 = ld chunk;
      chunk29 = force? chunk28;
      checkMissing(chunk29);
      return chunk29;
    };
    p25 = prom<V +>{
      r104 = clos inner766562580;
      return r104;
    };
    r106 = dyn sapply2(p24, p25);
    check L167() else D54();
  L169():
    p26 = prom<V +>{
      chunk30 = ld chunk;
      chunk31 = force? chunk30;
      checkMissing(chunk31);
      return chunk31;
    };
    p27 = prom<V +>{
      r108 = clos inner766562580;
      return r108;
    };
    r110 = dyn sapply3(p26, p27);
    check L170() else D56();
  D54():
    deopt 210 [i26, r106];
  D56():
    deopt 215 [i26, r110];
  L167():
    goto L36(i26, r106);
  L170():
    goto L36(i26, r110);
  }
}
fun inner325108712(l) {
  (reg l:*) -+> V { var l:*, reg l1:*, reg l2:V, reg c:L, reg l4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _in_:cls, reg l5:*, reg l6:V, reg p:p(V +), reg exclude:*, reg exclude1:V, reg p1:p(V +), reg r2:V, reg r3:V, reg __:cls, reg r4:V |
    mkenv;
    st l = l;
    l1 = ld l;
    check L1() else D0();
  D0():
    deopt 0 [l1];
  L1():
    l2 = force? l1;
    checkMissing(l2);
    c = `is.object`(l2);
    if c then L2() else L3(l2);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", l2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(l4):
    _in_ = ldf `%in%`;
    check L5() else D1();
  D1():
    deopt 3 [l4];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    p = prom<V +>{
      l5 = ld l;
      l6 = force? l5;
      checkMissing(l6);
      return l6;
    };
    p1 = prom<V +>{
      exclude = ld exclude;
      exclude1 = force? exclude;
      checkMissing(exclude1);
      return exclude1;
    };
    r2 = dyn _in_(p, p1);
    check L6() else D2();
  D2():
    deopt 6 [l4, r2];
  L6():
    r3 = `!`(r2);
    __ = ldf `[` in base;
    r4 = dyn __(l4, r3);
    goto L0(r4);
  }
}
fun inner766562580(line) {
  (reg line:*) -+> V { var line:*, reg paste:cls, reg rev:cls, reg line1:*, reg line2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg r10:I, reg r11:V, reg label:*, reg label1:V, reg c1:L, reg r14:V, reg r15:I, reg label3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r18:V, reg r19:I, reg dx3:V, reg i:*, reg i1:V, reg __:cls, reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg r27:I, reg r28:V, reg line3:*, reg line4:V, reg length:cls, reg r29:V, reg min:cls, reg r30:V, reg r31:V, reg __1:cls, reg r32:V, reg p1:p(V +), reg r34:V |
    mkenv;
    st line = line;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      rev = ldf rev;
      p = prom<V +>{
        line1 = ld line;
        line2 = force? line1;
        checkMissing(line2);
        return line2;
      };
      r1 = dyn rev(p);
      c = `is.object`(r1);
      if c then L4() else L5(r1);
    L0(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[", r1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r3):
      sym = ldf min;
      base = ldf min in base;
      guard = `==`.4(sym, base);
      if guard then L7() else L8();
    L1(r9, r10, r11):
      r31 = `:`(r10, r11);
      __1 = ldf `[` in base;
      r32 = dyn __1(r9, r31);
      goto L0(r32);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L7():
      label = ld label;
      label1 = force? label;
      checkMissing(label1);
      c1 = `is.object`(label1);
      if c1 then L9() else L10(r3, 1, label1);
    L8():
      r8 = dyn base(<lang `[`(label, i)>, <lang length(line)>);
      goto L1(r3, 1, r8);
    L2(r18, r19, dx3):
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L12() else L13();
    L9():
      dr2 = tryDispatchBuiltin.1("[", label1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L11() else L10(r3, 1, dr2);
    L10(r14, r15, label3):
      i = ld i;
      i1 = force? i;
      __ = ldf `[` in base;
      r20 = dyn __(label3, i1);
      goto L2(r14, r15, r20);
    L3(r26, r27, r28):
      min = ldf min in base;
      r30 = dyn min(dx3, r28);
      goto L1(r26, r27, r30);
    L11():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L2(r3, 1, dx2);
    L12():
      line3 = ld line;
      line4 = force? line3;
      checkMissing(line4);
      length = ldf length in base;
      r29 = dyn length(line4);
      goto L3(r18, r19, r29);
    L13():
      r25 = dyn base1(<sym line>);
      goto L3(r18, r19, r25);
    };
    r34 = dyn paste[, collapse](p1, ":");
    check L1() else D1();
  D1():
    deopt 5 [r34];
  L1():
    popenv;
    return r34;
  }
}
fun inner823136959(these) {
  (reg these:*) -+> V { var these:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg with:cls, reg these1:*, reg these2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg round:cls, reg r5:V, reg p1:p(V +), reg r7:V |
    mkenv;
    st these = these;
    sym = ldf with;
    base = ldf with in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    with = ldf with;
    check L3() else D0();
  L2():
    r = dyn base(<sym these>, <lang round(c(vsize.small=mean(vsize.small), max.vsize.small=max(vsize.small), vsize.large=mean(vsize.large), max.vsize.large=max(vsize.large), nodes=mean(nodes), max.nodes=max(nodes), duplications=mean(duplications), tot.duplications=sum(duplications), samples=nrow(these)))>);
    goto L0(r);
  D0():
    deopt 2 [];
  L3():
    p = prom<V +>{
      these1 = ld these;
      these2 = force? these1;
      checkMissing(these2);
      return these2;
    };
    p1 = prom<V +>{
      sym1 = ldf round;
      base1 = ldf round in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      return r4;
    L1():
      round = ldf round in base;
      r5 = dyn round(<lang c(vsize.small=mean(vsize.small), max.vsize.small=max(vsize.small), vsize.large=mean(vsize.large), max.vsize.large=max(vsize.large), nodes=mean(nodes), max.nodes=max(nodes), duplications=mean(duplications), tot.duplications=sum(duplications), samples=nrow(these))>);
      goto L0(r5);
    L2():
      r3 = dyn base1(<lang c(vsize.small=mean(vsize.small), max.vsize.small=max(vsize.small), vsize.large=mean(vsize.large), max.vsize.large=max(vsize.large), nodes=mean(nodes), max.nodes=max(nodes), duplications=mean(duplications), tot.duplications=sum(duplications), samples=nrow(these))>);
      goto L0(r3);
    };
    r7 = dyn with(p, p1);
    check L4() else D1();
  D1():
    deopt 5 [r7];
  L4():
    goto L0(r7);
  }
}