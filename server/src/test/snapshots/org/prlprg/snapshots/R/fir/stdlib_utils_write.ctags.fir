fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1449774989;
    st `write.ctags` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1449774989(src, tokens, startlines, lines, nchars, `...`, `shorten.lines`) {
  (reg src:*, reg tokens:*, reg startlines:*, reg lines:*, reg nchars:*, reg ddd:dots, reg shorten_lines:*) -+> V { var src:*, var tokens:*, var startlines:*, var lines:*, var nchars:*, var `...`:dots?, var `shorten.lines`:*, reg shorten_lines_isMissing:L, reg shorten_lines_orDefault:*, reg sprintf:cls, reg tokens1:*, reg tokens2:V, reg p:p(V +), reg src1:*, reg src2:V, reg p1:p(V +), reg startlines1:*, reg startlines2:V, reg p2:p(V +), reg r3:V, reg cat:cls, reg tag_lines:*, reg tag_lines1:V, reg p3:p(V +), reg ddd1:dots?, reg r5:V |
    mkenv;
    st src = src;
    st tokens = tokens;
    st startlines = startlines;
    st lines = lines;
    st nchars = nchars;
    st `...` = ddd;
    shorten_lines_isMissing = missing.0(shorten_lines);
    if shorten_lines_isMissing then L0(NULL) else L0(shorten_lines);
  L0(shorten_lines_orDefault):
    st `shorten.lines` = shorten_lines_orDefault;
    sprintf = ldf sprintf;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      tokens1 = ld tokens;
      tokens2 = force? tokens1;
      checkMissing(tokens2);
      return tokens2;
    };
    p1 = prom<V +>{
      src1 = ld src;
      src2 = force? src1;
      checkMissing(src2);
      return src2;
    };
    p2 = prom<V +>{
      startlines1 = ld startlines;
      startlines2 = force? startlines1;
      checkMissing(startlines2);
      return startlines2;
    };
    r3 = dyn sprintf("%s\t%s\t%d\n", p, p1, p2);
    check L2() else D1();
  D1():
    deopt 6 [r3];
  L2():
    st `tag.lines` = r3;
    cat = ldf cat;
    check L3() else D2();
  D2():
    deopt 9 [];
  L3():
    p3 = prom<V +>{
      tag_lines = ld `tag.lines`;
      tag_lines1 = force? tag_lines;
      checkMissing(tag_lines1);
      return tag_lines1;
    };
    ddd1 = ld `...`;
    r5 = dyn cat[, sep, `...`](p3, "", ddd1);
    check L4() else D3();
  D3():
    deopt 14 [r5];
  L4():
    popenv;
    return r5;
  }
}