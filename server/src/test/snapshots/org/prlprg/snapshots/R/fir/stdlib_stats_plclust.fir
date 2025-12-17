fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2521727330;
    st plclust = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2521727330(tree, hang, unit, level, hmin, square, labels, `plot.`, axes, `frame.plot`, ann, main, sub, xlab, ylab) {
  (reg tree:*, reg hang:*, reg unit:*, reg level:*, reg hmin:*, reg square:*, reg labels:*, reg plot_:*, reg axes:*, reg frame_plot:*, reg ann:*, reg main:*, reg sub:*, reg xlab:*, reg ylab:*) -+> V { var tree:*, var hang:*, reg hang_isMissing:L, reg hang_orDefault:*, var unit:*, reg unit_isMissing:L, reg unit_orDefault:*, var level:*, reg level_isMissing:L, reg level_orDefault:*, var hmin:*, reg hmin_isMissing:L, reg hmin_orDefault:*, var square:*, reg square_isMissing:L, reg square_orDefault:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, var `plot.`:*, reg plot__isMissing:L, reg plot__orDefault:*, var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var `frame.plot`:*, reg frame_plot_isMissing:L, reg frame_plot_orDefault:*, var ann:*, reg ann_isMissing:L, reg ann_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var sub:*, reg sub_isMissing:L, reg sub_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, reg _Defunct:cls, reg r:V |
    mkenv;
    st tree = tree;
    hang_isMissing = missing.0(hang);
    if hang_isMissing then L0(0.1) else L0(hang);
  L0(hang_orDefault):
    st hang = hang_orDefault;
    unit_isMissing = missing.0(unit);
    if unit_isMissing then L1(FALSE) else L1(unit);
  L1(unit_orDefault):
    st unit = unit_orDefault;
    level_isMissing = missing.0(level);
    if level_isMissing then L2(FALSE) else L2(level);
  L2(level_orDefault):
    st level = level_orDefault;
    hmin_isMissing = missing.0(hmin);
    if hmin_isMissing then L3(0.0) else L3(hmin);
  L3(hmin_orDefault):
    st hmin = hmin_orDefault;
    square_isMissing = missing.0(square);
    if square_isMissing then L4(TRUE) else L4(square);
  L4(square_orDefault):
    st square = square_orDefault;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L5(NULL) else L5(labels);
  L5(labels_orDefault):
    st labels = labels_orDefault;
    plot__isMissing = missing.0(plot_);
    if plot__isMissing then L6(TRUE) else L6(plot_);
  L6(plot__orDefault):
    st `plot.` = plot__orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L7(TRUE) else L7(axes);
  L7(axes_orDefault):
    st axes = axes_orDefault;
    frame_plot_isMissing = missing.0(frame_plot);
    if frame_plot_isMissing then L8(FALSE) else L8(frame_plot);
  L8(frame_plot_orDefault):
    st `frame.plot` = frame_plot_orDefault;
    ann_isMissing = missing.0(ann);
    if ann_isMissing then L9(TRUE) else L9(ann);
  L9(ann_orDefault):
    st ann = ann_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L10("") else L10(main);
  L10(main_orDefault):
    st main = main_orDefault;
    sub_isMissing = missing.0(sub);
    if sub_isMissing then L11(NULL) else L11(sub);
  L11(sub_orDefault):
    st sub = sub_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L12(NULL) else L12(xlab);
  L12(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L13("Height") else L13(ylab);
  L13(ylab_orDefault):
    st ylab = ylab_orDefault;
    _Defunct = ldf `.Defunct`;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    r = dyn _Defunct("plot");
    check L15() else D1();
  D1():
    deopt 3 [r];
  L15():
    popenv;
    return r;
  }
}