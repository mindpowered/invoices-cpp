
invoices
========
Create, edit, and track invoices as part of your app

![Build Status](https://mindpowered.dev/assets/images/github-badges/build-passing.svg)

Contents
========

* [Source Code and Documentation](#source-code-and-documentation)
* [About](#about)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Support](#support)
* [Licensing](#licensing)

# Source Code and Documentation
- Source Code: [https://github.com/mindpowered/invoices-cpp](https://github.com/mindpowered/invoices-cpp)
- Documentation: [https://mindpowered.github.io/invoices-cpp](https://mindpowered.github.io/invoices-cpp)

# About
An invoice lists the quantities and costs of the products or services provided by a seller to a buyer. The top of the invoice usually includes the:
- contact information of the seller
- contact information of the buyer
- date of the invoice

In the middle of the invoice is a list of products or services. A line item refers to a line from this list. The line item describes the product or service, quantity, rate, price, and taxes.

At the bottom of the invoice is a summary which usually includes:
- subtotal (before tax)
- total (with tax) amount
- payment terms.

This package aims to provide the tools to create and edit invoices. This is useful for sending by the seller or receiving by the buyer.

# Requirements
- Bazel - https://www.bazel.build/
- Haxe 4.1.1
- Neko
- hxcpp - https://lib.haxe.org/p/hxcpp/
- g++


Third-party dependencies may have additional requirements.

# Installation
Add rules to WORKSPACE file ...

```
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
  name = 'maglev',
  remote = 'https://github.com/mindpowered/maglev-cpp.git',
  branch = 'master',
)
git_repository(
  name = 'haxecpp',
  remote = 'https://github.com/mindpowered/haxecpp-cpp.git',
  branch = 'master',
)
git_repository(
  name = 'invoices',
  remote = 'https://github.com/mindpowered/invoices-cpp.git',
  branch = 'master',
)
```

Reference dependency in BUILD file ...

```
    deps = [
        ...
        "@invoices//:invoices"
        ...
    ],
```


# Usage
```cpp
#include <mindpowered/invoices/Invoices.h>

auto inv = new Invoices();
inv->Create("354", "2153", "2021-02-01", "2021-03-01", "Thanks for the business!");
delete inv;
```


# Support
We are here to support using this package. If it doesn't do what you're looking for, isn't working, or you just need help, please [Contact us][contact].

There is also a public [Issue Tracker][bugs] available for this package.

# Licensing
This package is released under the MIT License.



[bugs]: https://github.com/mindpowered/invoices-cpp/issues
[contact]: https://mindpowered.dev/support/?ref=invoices-cpp/
[docs]: https://mindpowered.github.io/invoices-cpp/
[licensing]: https://mindpowered.dev/?ref=invoices-cpp
[purchase]: https://mindpowered.dev/purchase/
