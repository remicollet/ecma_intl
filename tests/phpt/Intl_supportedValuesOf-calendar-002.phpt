--TEST--
Intl::supportedValuesOf(calendar) is sorted and unique
--EXTENSIONS--
ecma_intl
--FILE--
<?php
use Ecma\Intl;
use Ecma\Intl\Category;

$values = Intl::supportedValuesOf(Category::Calendar);
$uniqueSortedValues = [];

echo json_encode($values) . "\n";

$uniqueSortedValues = array_unique($values);
sort($uniqueSortedValues);

if ($uniqueSortedValues !== $values) {
    echo "Expected calendar values to be sorted and have unique values.\n";
}

--EXPECTF--
[%s]
